/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorand <hmorand@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 15:16:30 by hmorand           #+#    #+#             */
/*   Updated: 2024/04/26 15:16:30 by hmorand          ###   ########.ch       */
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

t_list	*ft_lstmap(t_list *ls, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_elem;

	if (!ls || !f || !del)
		return (NULL);
	new_list = NULL;
	new_elem = NULL;
	while (ls)
	{
		new_elem = ft_lstnew_strict(f(ls->content));
		if (!new_elem)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		if (!new_list)
			new_list = new_elem;
		else
			ft_lstadd_back(&new_list, new_elem);
		ls = lst->next;
	}
	return (new_list);
}
