/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   garbage_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorand <hmorand@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 15:36:06 by hmorand           #+#    #+#             */
/*   Updated: 2024/02/22 15:36:29 by hmorand          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

/* Gracefully adapted from our very own rude-jes */
/* (Github: https://github.com/RPDJF/betterft/)  */

#include "../libft.h"

t_garbage	**getgarbage(void)
{
	static t_garbage	*collector;

	return (&collector);
}

t_garbage	*lastgarbage(t_garbage *garb)
{
	if (!garb)
		return (0);
	while (garb->next)
		garb = garb->next;
	return (garb);
}

void	*addgarbage(void *address)
{
	t_garbage	**collector;
	t_garbage	*tmp;
	t_garbage	*last;

	if (!address)
		return (0);
	collector = getgarbage();
	tmp = (t_garbage *)malloc(sizeof(t_garbage));
	if (!tmp)
		return (0);
	last = 0;
	tmp->next = 0;
	tmp->previous = 0;
	tmp->content = address;
	if (*collector)
	{
		last = lastgarbage(*collector);
		last->next = tmp;
		tmp->previous = last;
	}
	else
		*collector = tmp;
	return (tmp->content);
}

void	cleargarbage(void)
{
	t_garbage	**collector;
	t_garbage	*todel;
	t_garbage	*tmp;

	collector = getgarbage();
	todel = *collector;
	while (todel)
	{
		free(todel->content);
		tmp = todel->next;
		free(todel);
		todel = tmp;
	}
	*collector = 0;
}
