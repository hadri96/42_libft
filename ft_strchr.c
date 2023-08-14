/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorand <hmorand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 23:49:04 by hmorand           #+#    #+#             */
/*   Updated: 2023/08/14 10:39:22 by hmorand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == c)
			return ((char *)str);
		str++;
	}
	if (c == '\0')
		return ((char *)str);
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("Character in position 0: %s\n", ft_strchr("Hello", 'H'));
	printf("Character in position 4: %s\n", ft_strchr("Hello", 'o'));
	printf("Double occurence: %s\n", ft_strchr("Hello", 'l'));
	printf("Null character: %s\n", ft_strchr("Hello", '\0'));
	printf("Francinette test: %s\n", ft_strchr("teste", 'e'));
	printf("Character not in string: %s\n", ft_strchr("Hello", 'j'));
}
 */