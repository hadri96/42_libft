/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorand <hmorand@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 14:33:58 by hmorand           #+#    #+#             */
/*   Updated: 2024/02/21 14:33:58 by hmorand          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*space;

	space = galloc(nmemb * size);
	if (!space)
		return (NULL);
	ft_bzero(space, nmemb * size);
	return (space);
}
