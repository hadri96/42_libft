/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arr_pop.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorand <hmorand@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 09:38:01 by hmorand           #+#    #+#             */
/*   Updated: 2024/02/27 09:49:15 by hmorand          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	**strarr_pop(char **arr, int index)
{
	int		size;
	int		i;
	char	**new_arr;

	size = strarr_len(arr);
	if (index >= size)
		return (NULL);
	new_arr = galloc(sizeof(char *) * (size - 1) + 1);
	if (new_arr)
		return (NULL);
	i = -1;
	while (++i < size)
	{
		if (i < index)
			new_arr[i] = ft_strdup(arr[i]);
		else if (i > index)
			new_arr[i - 1] = ft_strdup(arr[i]);
	}
	free_strarr(arr);
	new_arr[i - 1] = NULL;
	return (new_arr);
}
