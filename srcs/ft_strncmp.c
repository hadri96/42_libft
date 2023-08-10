/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorand <hmorand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 16:49:18 by hmorand           #+#    #+#             */
/*   Updated: 2023/08/10 17:12:30 by hmorand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((*s1 || *s2) && i < n)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
		i++;
	}
	if (*s1 || *s2)
		return (0);
	return (*s1 - *s2);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("Identical strings: %d\n", ft_strncmp("Hello", "Hello", 5));
	printf("s1 bigger than s2: %d\n", ft_strncmp("hello", "Hello", 5));
	printf("s1 smaller than s2: %d\n", ft_strncmp("Hello", "hello", 5));
	printf("s1 longer than s2: %d\n", ft_strncmp("hello", "hell", 5));
	printf("s1 shorter than s2: %d\n", ft_strncmp("hell", "hello", 5));
	printf("Difference right after n: %d\n", ft_strncmp("hello", "hell", 4));
	printf("Difference way after n: %d\n", ft_strncmp("hello world", "hello", 5));
}
 */
