/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorand <hmorand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 23:32:25 by hmorand           #+#    #+#             */
/*   Updated: 2023/08/11 16:57:08 by hmorand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	str = (char *) s;
	i = 0;
	while (i != n)
		str[i++] = 0;
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	// Test Case 1: Zeroing out a portion of memory
	char data1[] = "Hello, world!";

	printf("Test Case 1: Zeroing out a portion of memory\n");
	printf("Original Data: \"%s\"\n", data1);

	ft_bzero(data1 + 6, 5);
	printf("Result after ft_bzero: \"%s\"\n", data1);

	char data1_copy[] = "Hello, world!";
	bzero(data1_copy + 6, 5);
	printf("Result after bzero:   \"%s\"\n", data1_copy);

	// Test Case 2: Zeroing out the entire memory
	char data2[] = "Some data to zero";
	size_t len2 = strlen(data2);

	printf("\nTest Case 2: Zeroing out the entire memory\n");
	printf("Original Data: \"%s\"\n", data2);

	ft_bzero(data2, len2);
	printf("Result after ft_bzero: \"%s\"\n", data2);

	char data2_copy[] = "Some data to zero";
	bzero(data2_copy, len2);
	printf("Result after bzero:   \"%s\"\n", data2_copy);

	return 0;
}
 */
