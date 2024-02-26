/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorand <hmorand@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 14:36:57 by hmorand           #+#    #+#             */
/*   Updated: 2024/02/21 14:36:57 by hmorand          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*((unsigned char *)str) == (unsigned char)c)
			return ((char *)str);
		str++;
	}
	if ((unsigned char)c == '\0')
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
