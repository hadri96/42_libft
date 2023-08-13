/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorand <hmorand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 14:32:37 by hmorand           #+#    #+#             */
/*   Updated: 2023/08/13 15:44:53 by hmorand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnstr(const char *str, const char *substr, size_t len)
{
	size_t	i;
	size_t	j;

	j = 0;
	if (substr[0] == '\0')
		return ((char *)str);
	while (str[j] && j < len)
	{
		i = 0;
		while (str[i + j] == substr[i] && i + j < len)
		{
			if (!substr[i + 1])
				return ((char *)str + j);
			i++;
		}
		j++;
	}
	return (NULL);
}

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("Homemade function - Substring at beginning of string: %s\n",
		   ft_strnstr("Hello world", "Hel", 5));
	printf("Standard function - Substring at beginning of string: %s\n",
		   strnstr("Hello world", "Hel", 5));
	printf("---------------------------------------------------------------\n");
	printf("Homemade function - Substring in the middle of string: %s\n",
		   ft_strnstr("Hello world", "wor", 9));
	printf("Standard function - Substring in the middle of string: %s\n",
		   strnstr("Hello world", "wor", 9));
	printf("------------------------------------------------------------\n");
	printf("Homemade function - Substring at the end of string: %s\n",
		   ft_strnstr("Hello world", "ld", 11));
	printf("Standard function - Substring at the end of string: %s\n",
		   strnstr("Hello world", "ld", 11));
	printf("------------------------------------------------------\n");
	printf("Homemade function - Substring not in string: %s\n",
		   ft_strnstr("Hello world", "sandwich", 11));
	printf("Standard function - Substring not in string: %s\n",
		   strnstr("Hello world", "sandwich", 11));
	printf("------------------------------------------------------------\n");
	printf("Homemade function - Substring at end of string with pos > n: %s\n",
		   ft_strnstr("Hello world", "ld", 10));
	printf("Standard function - Substring at end of string with pos > n: %s\n",
		   strnstr("Hello world", "ld", 10));
	printf("----------------------------------------------------------\n");
	printf("Homemade function - Substring in middle with pos > n: %s\n",
		   ft_strnstr("Hello world", "wor", 7));
	printf("Standard function - Substring in middle with pos > n: %s\n",
		   strnstr("Hello world", "wor", 7));
}
 */
