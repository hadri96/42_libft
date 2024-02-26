/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorand <hmorand@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 14:32:59 by hmorand           #+#    #+#             */
/*   Updated: 2024/02/21 14:32:59 by hmorand          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*element;

	element = (t_list *)galloc(sizeof(t_list));
	if (!element)
		return (NULL);
	element->next = NULL;
	element->content = content;
	return (element);
}
