/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <Jfikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 22:29:51 by JFikents          #+#    #+#             */
/*   Updated: 2024/06/29 16:15:44 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	__ft_putchar_fd(int fd, int character)
{
	return (write(fd, &character, 1));
}

static int	__ft_putstr_fd(int fd, char *s)
{
	int	i;
	int	print_check;

	i = 0;
	print_check = 0;
	while (s != NULL && s[i])
	{
		print_check = write(fd, &s[i++], 1);
		if (print_check == -1)
			return (-1);
	}
	if (s == NULL)
		return (__ft_putstr_fd(fd, "(null)"));
	return (i);
}

static int	ft_puthex_fd(int fd, unsigned long long n, char x, int flag)
{
	static int	printed_bytes = 0;
	int			print_check;
	char		adjustment;

	adjustment = 'a';
	if (x == 'X')
		adjustment = 'A';
	if (flag == 0)
		printed_bytes = 0;
	if (n >= 16)
	{
		if (ft_puthex_fd(fd, n / 16, x, 1) == -1)
			return (-1);
		print_check = ft_puthex_fd(fd, n % 16, x, 1);
		return (print_check);
	}
	if (n < 10)
		print_check = __ft_putchar_fd(fd, n + '0');
	else
		print_check = __ft_putchar_fd(fd, n + adjustment - 10);
	if (print_check == -1)
		return (-1);
	printed_bytes ++;
	return (printed_bytes);
}

static int	ft_cases_fd(const char *formato, va_list arg, int fd)
{
	int		exit_status;
	char	*str;

	if (formato[1] == 'c')
		return (__ft_putchar_fd(fd, va_arg(arg, int)));
	if (formato[1] == '%')
		return (write(fd, "%", 1));
	if (formato[1] == 's')
		return (__ft_putstr_fd(fd, va_arg(arg, char *)));
	if ((formato[1] == 'd' || formato[1] == 'i'))
		str = ft_itoa(va_arg(arg, int));
	if (formato[1] == 'u')
		str = ft_itoa(va_arg(arg, unsigned int));
	if (formato[1] == 'd' || formato[1] == 'i' || formato[1] == 'u')
		return (exit_status = __ft_putstr_fd(fd, str), free(str), exit_status);
	if (formato[1] == 'p')
	{
		if (write(fd, "0", 1) == -1 || write(fd, "x", 1) == -1)
			return (-1);
		return (ft_puthex_fd(fd, va_arg(arg, unsigned long long), 'x', 1));
	}
	if (formato[1] == 'X' || formato[1] == 'x')
		return (ft_puthex_fd(fd, va_arg(arg, unsigned int), formato[1], 1));
	return (0);
}

int	ft_printf_fd(int fd, const char *format, ...)
{
	int				bytes_printed;
	int				print_check;
	int				i;
	va_list			input;

	va_start(input, format);
	bytes_printed = 0;
	i = 0;
	while (format && format[i])
	{
		print_check = 0;
		while (format[i] && format[i] != '%' && ++bytes_printed)
			if (write(fd, &format[i++], 1) == -1 && --print_check == -1)
				break ;
		if (format[i++] == '%' && print_check != -1)
		{
			print_check = ft_cases_fd(&format[i - 1], input, fd);
			if (format[i++ - 1] == 'p')
				bytes_printed += 2;
			bytes_printed += print_check;
		}
		if (print_check == -1)
			return (-1);
	}
	return (va_end(input), bytes_printed);
}
