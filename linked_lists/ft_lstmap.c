/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorand <hmorand@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 14:33:04 by hmorand           #+#    #+#             */
/*   Updated: 2024/02/21 14:33:04 by hmorand          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list	*ft_lstnew_strict(void *content)
{
	t_list	*element;

	element = (t_list *)galloc(sizeof(t_list));
	if (!element)
	{
		gfree(content);
		return (NULL);
	}
	element->next = NULL;
	element->content = content;
	return (element);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_elem;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	new_elem = NULL;
	while (lst)
	{
		new_elem = ft_lstnew_strict(f(lst->content));
		if (!new_elem)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		if (!new_list)
			new_list = new_elem;
		else
			ft_lstadd_back(&new_list, new_elem);
		lst = lst->next;
	}
	return (new_list);
}
