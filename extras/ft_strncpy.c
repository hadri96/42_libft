/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorand <hmorand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 15:30:08 by hmorand           #+#    #+#             */
/*   Updated: 2023/08/11 16:38:18 by hmorand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = -1;
	while (src[++i] && i < n - 1)
		dest[i] = src[i];
	dest[i] = src[i];
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char src1[] = "Hello world";
	char dest1a[25];
	char dest1b[25];
	printf("Homemade function - Normal string: \"%s\"\n",
		   ft_strncpy(dest1a, src1, 12));
	printf("Standard function - Normal string: \"%s\"\n",
		   strncpy(dest1b, src1, 12));
	printf("-----------------------------------------------\n");

	const char src2[] = "";
	char dest2a[25];
	char dest2b[25];
	printf("Homemade function - Empty string: \"%s\"\n",
		   ft_strncpy(dest2a, src2, 2));
	printf("Standard function - Empty string: \"%s\"\n",
		   strncpy(dest2b, src2, 2));
	printf("------------------------------------------\n");

	const char src3[] = "Yeeeee";
	char dest3a[25];
	char dest3b[25];
	printf("Homemade function - Normal string: \"%s\"\n",
		   ft_strncpy(dest3a, src3, 5));
	printf("Standard function - Normal string: \"%s\"\n",
		   strncpy(dest3b, src3, 5));
}
 */
