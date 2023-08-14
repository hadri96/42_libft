/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorand <hmorand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 15:05:13 by hmorand           #+#    #+#             */
/*   Updated: 2023/08/11 16:38:43 by hmorand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = -1;
	while (src[++i])
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
	printf("Homemade function - Normal string: \"%s\"\n", ft_strcpy(dest1a, src1));
	printf("Standard function - Normal string: \"%s\"\n", strcpy(dest1b, src1));
	printf("-----------------------------------------------\n");

	const char src2[] = "";
	char dest2a[25];
	char dest2b[25];
	printf("Homemade function - Empty string: \"%s\"\n", ft_strcpy(dest2a, src2));
	printf("Standard function - Empty string: \"%s\"\n", strcpy(dest2b, src2));
	printf("------------------------------------------\n");

	const char src3[] = "Yeeee";
	char dest3a[25];
	char dest3b[25];
	printf("Homemade function - Normal string: \"%s\"\n", ft_strcpy(dest3a, src3));
	printf("Standard function - Normal string: \"%s\"\n", strcpy(dest3b, src3));
}
 */
