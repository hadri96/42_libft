/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorand <hmorand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 17:19:20 by hmorand           #+#    #+#             */
/*   Updated: 2023/08/11 13:54:02 by hmorand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strstr(const char *str, const char *substr)
{
	int	i;
	int	j;

	j = 0;
	while (str[j])
	{
		i = 0;
		while (str[i + j] == substr[i])
		{
			if (!substr[i + 1])
				return (str + j);
			i++;
		}
		j++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("Substring at beginning of string: %s\n",
		   ft_strstr("Hello world", "Hel"));
	printf("Substring in the middle of string: %s\n",
		   ft_strstr("Hello world", "wor"));
	printf("Substring at the end of string: %s\n",
		   ft_strstr("Hello world", "ld"));
	printf("Substring not in string: %s\n",
		   ft_strstr("Hello world", "sandwich"));
}
 */
