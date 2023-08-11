/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorand <hmorand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 11:20:30 by hmorand           #+#    #+#             */
/*   Updated: 2023/08/11 11:30:25 by hmorand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	static	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(dest);
	j = 0;
	while (src[j] && j < n)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char src1[] = "world";
	char dest1[25] = "Hello ";

	printf("Homemade function: \"%s\"\n",
			ft_strncat(dest1, src1, 5));

	char src2[] = "world";
	char dest2[25] = "Hello ";
	printf("Standard function: \"%s\"\n",
			strncat(dest2, src2, 5));

	printf("-------------------------------\n");
	char src3[] = "lujah";
	char dest3[25] = "Halle";

	printf("Homemade function: \"%s\"\n",
			ft_strncat(dest3, src3, 5));

	char src4[] = "lujah";
	char dest4[25] = "Halle";
	printf("Standard function: \"%s\"\n",
			strncat(dest4, src4, 5));

	printf("----------------------------------------\n");
	char src5[] = "world";
	char dest5[25] = "Hello ";

	printf("Homemade function - n < src: \"%s\"\n",
			ft_strncat(dest5, src5, 3));

	char src6[] = "world";
	char dest6[25] = "Hello ";
	printf("Standard function - n < src: \"%s\"\n",
			strncat(dest6, src6, 3));

	printf("----------------------------------------\n");
	char src7[] = "lujah";
	char dest7[25] = "Halle";

	printf("Homemade function - n < src: \"%s\"\n",
		   ft_strncat(dest7, src7, 3));

	char src8[] = "lujah";
	char dest8[25] = "Halle";
	printf("Standard function - n < src: \"%s\"\n",
		   strncat(dest8, src8, 3));
}
 */
