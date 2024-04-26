/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorand <hmorand@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 11:35:31 by hmorand           #+#    #+#             */
/*   Updated: 2024/04/26 11:35:31 by hmorand          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;
	char	*sdest;
	char	*ssrc;

	sdest = (char *) dest;
	ssrc = (char *) src;
	i = 0;
	while (n > i)
	{
		sdest[i] = ssrc[i];
		if (ssrc[i] == c)
			return ((void *)(sdest + (i + 1)));
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	// Test Case 1: Copying bytes until the specified character is found
	char src1[] = "Hello, world!";
	char dest1[20];

	printf("Test Case 1: Copying bytes until specified character is found\n");
	printf("Source: \"%s\"\n", src1);

	char *result1 = ft_memccpy(dest1, src1, 'l', sizeof(src1));
	if (result1)
	{
		size_t bytes_copied = result1 - dest1;
		dest1[bytes_copied - 1] = '\0'; // Null-terminate the copied string
		printf("Result: \"%s\"\n", dest1);
	}
	else
	{
		printf("Result: No character found.\n");
	}

	// Test Case 2: Copying bytes when the specified character is not found
	char src2[] = "Hello, world!";
	char dest2[20];

	printf("\nTest Case 2: Copying bytes when
	 specified character is not found\n");
	printf("Source: \"%s\"\n", src2);

	char *result2 = ft_memccpy(dest2, src2, 'l', sizeof(src2));
	if (result2)
	{
		size_t bytes_copied = result2 - dest2;
		dest2[bytes_copied - 1] = '\0'; // Null-terminate the copied string
		printf("Result: \"%s\"\n", dest2);
	}
	else
	{
		printf("Result: No character found.\n");
	}

	// Test Case 3: Copying a portion of memory
	char src3[] = "123456789";
	char dest3[20];

	printf("\nTest Case 3: Copying a portion of memory\n");
	printf("Source: \"%s\"\n", src3);

	ft_memccpy(dest3, src3 + 2, '7', 4);
	printf("Result: \"%s\"\n", dest3);

	// Test Case 4: Copying entire memory
	char src4[] = "Copy all of this.";
	char dest4[20];

	printf("\nTest Case 4: Copying entire memory\n");
	printf("Source: \"%s\"\n", src4);

	char *result4 = ft_memccpy(dest4, src4, '\0', sizeof(src4));
	if (result4)
	{
		size_t bytes_copied = result4 - dest4;
		dest4[bytes_copied - 1] = '\0'; // Null-terminate the copied string
		printf("Result: \"%s\"\n", dest4);
	}
	else
	{
		printf("Result: No character found.\n");
	}

	// Test Case 5: Copying zero bytes
	char src5[] = "This won't be copied.";
	char dest5[20];

	printf("\nTest Case 5: Copying zero bytes\n");
	printf("Source: \"%s\"\n", src5);

	char *result5 = ft_memccpy(dest5, src5, 'w', 0);
	if (result5)
	{
		size_t bytes_copied = result5 - dest5;
		dest5[bytes_copied - 1] = '\0'; // Null-terminate the copied string
		printf("Result: \"%s\"\n", dest5);
	}
	else
	{
		printf("Result: No character found.\n");
	}

	return 0;
}
 */
