/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luinasci <luinasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:41:31 by luinasci          #+#    #+#             */
/*   Updated: 2024/10/17 16:01:49 by luinasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// This function applies a given function f to each node's content in the 
// original linked list (lst) and creates a new linked list resulting from 
// the transformed content. It takes three parameters: the original list (lst), 
// a function pointer (f) that transforms the content, and a function pointer (del) 
// used to free the memory of any content in case of an error. If the new node 
// cannot be created, it cleans up any already created nodes using del and returns NULL.

#include <stddef.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*current;
	void	*new_content;
	t_list	*new_node;

	new_list = NULL;
	current = lst;
	while (current != NULL)
	{
		new_content = f(current->content);
		new_node = ft_lstnew(new_content);
		if (new_node == NULL)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, del);
		current = current->next;
	}
	return (new_list);
}
