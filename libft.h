#pragma once
int	ft_strlen(char *str);
void	*ft_memset(void *address, int filler, size_t size);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memcpy(void *dest, const void *src, size_t size);
int	ft_isprint(unsigned char car);
int	ft_isdigit(unsigned char car);
int	ft_isascii(unsigned char car);
int	ft_isalpha(char car);
int	ft_isalnum(unsigned char car);
void	ft_bzero(void *address, size_t size);