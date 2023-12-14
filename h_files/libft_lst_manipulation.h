/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_lst_manipulation.h                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <JFikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:47:09 by JFikents          #+#    #+#             */
/*   Updated: 2023/12/14 21:01:36 by JFikents         ###   ########.fr       */
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

/**
	@note//_DESCRIPTION
	@brief #### Creates new node
	@brief Creates a new list element with the given content.
	@note//_PARAMETERS
	@param content The content to be stored in the new element.
	@note//_RETURNS
	@return new `t_list` pointer or `NULL` if allocation fails.
	@note//_NOTES
	@note The node has been allocated, don't forget to `free()` it.
	@note The node is not linked to any other node and its `next` pointer
		is set to `NULL`.
	@note//_WARNINGS
	@warning The content is not copied, only its address is stored.
	@warning If the content was allocated, it must be freed before
		the node is freed.
 */
t_list	*ft_lstnew(void *content);

/**
	@note//_DESCRIPTION
	@brief #### Adds node to the front of the list
	@brief Takes the node `new` and adds it to the beginning of the list.
	@note//_PARAMETERS
	@param lst The address of the pointer to the first node of a list.
	@param new The node to add at the beginning of the list.
 */
void	ft_lstadd_front(t_list **lst, t_list *new);

/**
	@note//_DESCRIPTION
	@brief #### Adds node to the end of the list
	@brief Takes the node `new` and adds it to the end of the list.
	@note//_PARAMETERS
	@param lst The address of the pointer to the first node of a list.
	@param new The node to add at the end of the list.
 */
void	ft_lstadd_back(t_list **lst, t_list *new);

/**
	@note//_DESCRIPTION
	@brief #### Counts the nodes in the list
	@brief Counts the amount of nodes from its first element until it finds
		a list member whose `->next` points to `NULL`.
	@note//_PARAMETERS
	@param lst The first node of a list.
	@note//_RETURNS
	@return The number of nodes in the list.
 */
int		ft_lstsize(t_list *lst);

/**
	@note//_DESCRIPTION
	@brief #### Finds the last node of the list
	@brief Moves through the list until it finds a list member whose `->next`
		points to `NULL`.
	@note//_PARAMETERS
	@param lst The first node of a list.
	@note//_RETURNS
	@return The last node of the list.
 */
t_list	*ft_lstlast(t_list *lst);

/**
	@note//_DESCRIPTION
	@brief #### Deletes the first node of the list
	@brief Deletes the `{first node}->content` with the given function `del()`
		and `free()` the memory of the node.
	@note//_PARAMETERS
	@param lst The address of the pointer to the first node of a list.
	@param del() The function used to delete the content of the node.
	@note//_NOTES
	@note Sets the pointer to the first node to `NULL`.
	@note//_WARNINGS
	@warning The Function does not reconect the nodes. If you delete the first
		node, you will lose the rest of the list if you don't save the pointer
		to the next node.
 */
void	ft_lstdelone(t_list *lst, void (*del)(void *));

/**
	@note//_DESCRIPTION
	@brief #### Deletes all nodes of the list
	@brief Deletes every `{node}->content` with the given function `del()`
		and `free()` the memory of each node.
	@note//_PARAMETERS
	@param lst The address of the pointer to the first node of a list.
	@param del() The function used to delete the content of the node.
	@note//_NOTES
	@note Sets `lst` to `NULL`.
	@note Returns inmediately if `lst`, `*lst` or `del()` are `NULL`.
 */
void	ft_lstclear(t_list **lst, void (*del) (void *));

/**
	@note//_DESCRIPTION
	@brief #### Iterates through the list
	@brief Iterates the list `lst` and applies the function `f()` to the
		content of each node.
	@note//_PARAMETERS
	@param lst The address of the pointer to the first node of a list.
	@param f() The function used to iterate through the list.
	@note//_NOTES
	@note Returns inmediately if `lst` or `f()` are `NULL`.
 */
void	ft_lstiter(t_list *lst, void (*f)(void *));

/**
	@note//_DESCRIPTION
	@brief #### Creates a new list with the results of `f()`
	@brief Iterates the list `lst` and applies the function `f()` to the
		content of each node and stores the result in a new list.
		If there is any error when creating a new node, the function
		uses `del()` to delete the content of the node and `ft_lstclear()` to
		delete the new list, returning `NULL`.
	@note//_PARAMETERS
	@param lst The pointer to the first node of a list.
	@param f() The function used to iterate through the list.
	@param del() The function used to delete the content of the node.
	@note//_RETURNS
	@return The new list. `NULL` if the allocation fails.
	@note//_NOTES
	@note Returns inmediately if `lst`, `f()` or `del()` are `NULL`.
	@note If the content was allocated, it must be freed before the node is
		freed.
	@note//_SEE_ALSO
	@see ft_lstclear()
	@see ft_lstnew()
	@see ft_lstadd_back()
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

//_--------------------------------------------------------------------------_//

#endif