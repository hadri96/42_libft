/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorand <hmorand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 16:37:57 by hmorand           #+#    #+#             */
/*   Updated: 2023/08/10 16:48:11 by hmorand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("Identical strings: %d\n", ft_strcmp("Hello", "Hello"));
	printf("s1 bigger than s2: %d\n", ft_strcmp("hello", "Hello"));
	printf("s1 smaller than s2: %d\n", ft_strcmp("Hello", "hello"));
	printf("s1 longer than s2: %d\n", ft_strcmp("hello", "hell"));
	printf("s1 shorter than s2: %d\n", ft_strcmp("hell", "hello"));
}
 */
