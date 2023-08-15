/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorand <hmorand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 17:11:04 by hmorand           #+#    #+#             */
/*   Updated: 2023/08/15 11:04:56 by hmorand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (NULL);
	i = 0;
	if (src > dest)
	{
		while (n > i)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i++;
		}
	}
	else
	{
		while (n)
		{
			n--;
			((char *)dest)[n] = ((char *)src)[n];
		}
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char src1_ft[] = "abcdefgh";
	char dest1_ft[20];

	printf("Test Case 1: Move bytes within the same buffer (ft_memmove)\n");
	printf("Original Data: \"%s\"\n", src1_ft);

	ft_memmove(dest1_ft + 2, src1_ft, 4);
	printf("Result: \"%s\"\n", dest1_ft);

	char src1_std[] = "abcdefgh";
	char dest1_std[20];

	printf("Test Case 1: Move bytes within the same buffer (memmove)\n");
	printf("Original Data: \"%s\"\n", src1_std);

	memmove(dest1_std + 2, src1_std, 4);
	printf("Result: \"%s\"\n", dest1_std);

	char src2_ft[] = "Move this";
	char dest2_ft[20] = "123456789";

	printf("\nTest Case 2: Move bytes from one buffer to another (no overlap) \
(ft_memmove)\n");
	printf("Source: \"%s\"\n", src2_ft);
	printf("Destination: \"%s\"\n", dest2_ft);

	ft_memmove(dest2_ft, src2_ft, strlen(src2_ft) + 1);
	printf("Result: \"%s\"\n", dest2_ft);

	char src2_std[] = "Move this";
	char dest2_std[20] = "123456789";

	printf("\nTest Case 2: Move bytes from one buffer to another \
(no overlap) (memmove)\n");
	printf("Source: \"%s\"\n", src2_std);
	printf("Destination: \"%s\"\n", dest2_std);

	memmove(dest2_std, src2_std, strlen(src2_std) + 1);
	printf("Result: \"%s\"\n", dest2_std);

	char src3_ft[] = "Move this";
	char dest3_ft[20] = "123456789";

	printf("\nTest Case 3: Move bytes from one buffer to another \
(with overlap) (ft_memmove)\n");
	printf("Source: \"%s\"\n", src3_ft);
	printf("Destination: \"%s\"\n", dest3_ft);

	ft_memmove(dest3_ft + 4, src3_ft, strlen(src3_ft) + 1);
	printf("Result: \"%s\"\n", dest3_ft);

	char src3_std[] = "Move this";
	char dest3_std[20] = "123456789";

	printf("\nTest Case 3: Move bytes from one buffer to another \
(with overlap) (memmove)\n");
	printf("Source: \"%s\"\n", src3_std);
	printf("Destination: \"%s\"\n", dest3_std);

	memmove(dest3_std + 4, src3_std, strlen(src3_std) + 1);
	printf("Result: \"%s\"\n", dest3_std);

	char src4_ft[] = "This will not be moved.";

	printf("\nTest Case 4: Move zero bytes (no effect) (ft_memmove)\n");
	printf("Original Data: \"%s\"\n", src4_ft);

	ft_memmove(src4_ft, src4_ft, 0);
	printf("Result: \"%s\"\n", src4_ft);

	char src4_std[] = "This will not be moved.";

	printf("\nTest Case 4: Move zero bytes (no effect) (memmove)\n");
	printf("Original Data: \"%s\"\n", src4_std);

	memmove(src4_std, src4_std, 0);
	printf("Result: \"%s\"\n", src4_std);

	char src5_ft[] = "123456789";
	char dest5_ft[20];

	printf("\nTest Case 5: Move bytes between overlapping memory \
regions (ft_memmove)\n");
	printf("Original Data: \"%s\"\n", src5_ft);

	ft_memmove(dest5_ft + 2, src5_ft, 6);
	printf("Result: \"%s\"\n", dest5_ft);

	char src5_std[] = "123456789";
	char dest5_std[20];

	printf("\nTest Case 5: Move bytes between overlapping memory \
regions (memmove)\n");
	printf("Original Data: \"%s\"\n", src5_std);

	memmove(dest5_std + 2, src5_std, 6);
	printf("Result: \"%s\"\n", dest5_std);

	return 0;
}
 */
