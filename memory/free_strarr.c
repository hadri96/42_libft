/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_strarr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorand <hmorand@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 11:19:14 by hmorand           #+#    #+#             */
/*   Updated: 2024/02/23 11:19:23 by hmorand          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	free_strarr(char **arr)
{
	int	i;

	i = -1;
	while (arr[++i])
		gfree(arr[i]);
	gfree(arr);
	arr = NULL;
}
