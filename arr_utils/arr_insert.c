/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arr_insert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorand <hmorand@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:39:47 by hmorand           #+#    #+#             */
/*   Updated: 2024/02/23 14:40:48 by hmorand          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	**arr_insert(char **arr, int pos, char *elem)
{
	int		i;
	int		j;
	int		len;
	char	**new_arr;

	len = strarr_len(arr);
	new_arr = galloc(sizeof(char *) * (len + 1) + 1);
	if (!new_arr)
		return (NULL);
	i = -1;
	j = 0;
	while (++i < len + 1)
	{
		if (i != pos)
			new_arr[i] = ft_strdup(arr[j++]);
		else
			new_arr[i] = ft_strdup(elem);
	}
	free_strarr(arr);
	new_arr[i] = NULL;
	return (new_arr);
}
