/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_lst_manipulation.h                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <JFikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:47:09 by JFikents          #+#    #+#             */
/*   Updated: 2023/12/13 23:49:36 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_LST_MANIPULATION_H
# define LIBFT_LST_MANIPULATION_H

// **-------------------------- TYPE DEFINITIONS -------------------------- **//

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

//_--------------------------------------------------------------------------_//

// **----------------------------- FUNCTIONS ----------------------------- **//

//_DESCRIPTION
//?		
//_RETURNS
//?		
//_NOTES
//*		
//_WARNINGS
//!		
t_list	*ft_lstnew(void *content);

//_DESCRIPTION
//?		
//_RETURNS
//?		
//_NOTES
//*		
//_WARNINGS
//!		
void	ft_lstadd_front(t_list **lst, t_list *new);

//_DESCRIPTION
//?		
//_RETURNS
//?		
//_NOTES
//*		
//_WARNINGS
//!		
int		ft_lstsize(t_list *lst);

//_DESCRIPTION
//?		
//_RETURNS
//?		
//_NOTES
//*		
//_WARNINGS
//!		
t_list	*ft_lstlast(t_list *lst);

//_DESCRIPTION
//?		
//_RETURNS
//?		
//_NOTES
//*		
//_WARNINGS
//!		
void	ft_lstadd_back(t_list **header, t_list *new);

//_DESCRIPTION
//?		
//_RETURNS
//?		
//_NOTES
//*		
//_WARNINGS
//!		
void	ft_lstdelone(t_list *lst, void (*del)(void *));

//_DESCRIPTION
//?		
//_RETURNS
//?		
//_NOTES
//*		
//_WARNINGS
//!		
void	ft_lstclear(t_list **header, void (*del) (void *));

//_DESCRIPTION
//?		
//_RETURNS
//?		
//_NOTES
//*		
//_WARNINGS
//!		
void	ft_lstiter(t_list *lst, void (*f)(void *));

//_DESCRIPTION
//?		
//_RETURNS
//?		
//_NOTES
//*		
//_WARNINGS
//!		
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

//_--------------------------------------------------------------------------_//

#endif