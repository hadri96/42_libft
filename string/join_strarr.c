/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   join_strarr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorand <hmorand@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 12:58:26 by hmorand           #+#    #+#             */
/*   Updated: 2024/02/26 12:59:17 by hmorand          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char *join_argv(char **argv, int argc)
{
	int i;
	int j;
	int k;
	char *result;
	int length;

	if (argc == 2)
		return (argv[1]);
	i = 1;
	while (i < argc)
		length = length + ft_strlen(argv[i++]) + 1;
	i = 0;
	k = 0;
	result = galloc(sizeof(char) * (length));
	if (!result)
		return (NULL);
	while (++i < argc)
	{
		j = 0;
		while (argv[i][j])
			result[k++] = argv[i][j++];
		result[k++] = ' ';
	}
	result[k - 1] = '\0';
	return (result);
}
