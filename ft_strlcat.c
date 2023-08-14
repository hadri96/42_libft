/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorand <hmorand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 13:45:00 by hmorand           #+#    #+#             */
/*   Updated: 2023/08/14 10:41:09 by hmorand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dest[i] && i < n)
		i++;
	while (src[j] && i + j + 1 < n)
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i < n)
		dest[i + j] = '\0';
	return (i + (size_t)ft_strlen(src));
}

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	// Test Case 1: Concatenating strings within buffer size
	char dest1[20] = "Hello, ";
	char dest2[20] = "Hello, ";
	const char *src = "world!";
	size_t result1_ft, result1_std;

	result1_ft = ft_strlcat(dest1, src, sizeof(dest1));
	result1_std = strlcat(dest2, src, sizeof(dest2));

	printf("Test Case 1: Concatenating strings within buffer size\n");
	printf("Homemade function result: %zu, Updated Destination: \"%s\"\n",
	result1_ft, dest1);
	printf("Standard function result: %zu, Updated Destination: \"%s\"\n",
	result1_std, dest2);

	// Test Case 2: Concatenating strings beyond buffer size
	char dest3[10] = "Hello, ";
	char dest4[10] = "Hello, ";
	const char *long_src = "world!";
	size_t result2_ft, result2_std;

	result2_ft = ft_strlcat(dest3, long_src, sizeof(dest3));
	result2_std = strlcat(dest4, long_src, sizeof(dest4));
	printf("----------------------------------------------------------------\n");
	printf("Test Case 2: Concatenating strings beyond buffer size\n");
	printf("Homemade function result: %zu, Updated Destination: \"%s\"\n",
	result2_ft, dest3);
	printf("Standard function result: %zu, Updated Destination: \"%s\"\n",
	result2_std, dest4);

	return 0;
}
 */
