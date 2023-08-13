/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorand <hmorand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 17:19:20 by hmorand           #+#    #+#             */
/*   Updated: 2023/08/11 14:31:05 by hmorand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strstr(char *str, const char *substr)
{
	int	i;

	while (*str)
	{
		i = 0;
		while (str[i] == substr[i])
		{
			if (!substr[i + 1])
				return (str);
			i++;
		}
		str++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("Homemade function - Substring at beginning of string: %s\n",
		   ft_strstr("Hello world", "Hel"));
	printf("Standard function - Substring at beginning of string: %s\n",
		   ft_strstr("Hello world", "Hel"));
	printf("---------------------------------------------------------------\n");
	printf("Homemade function - Substring in the middle of string: %s\n",
		   ft_strstr("Hello world", "wor"));
	printf("Standard function - Substring in the middle of string: %s\n",
		   ft_strstr("Hello world", "wor"));
	printf("------------------------------------------------------------\n");
	printf("Homemade function - Substring at the end of string: %s\n",
		   ft_strstr("Hello world", "ld"));
	printf("Standard function - Substring at the end of string: %s\n",
		   ft_strstr("Hello world", "ld"));
	printf("------------------------------------------------------\n");
	printf("Homemade function - Substring not in string: %s\n",
		   ft_strstr("Hello world", "sandwich"));
	printf("Standard function - Substring not in string: %s\n",
		   ft_strstr("Hello world", "sandwich"));
}
 */
