/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorand <hmorand@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 14:36:13 by hmorand           #+#    #+#             */
/*   Updated: 2024/02/21 14:36:13 by hmorand          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = (int)ft_strlen(str);
	while (i >= 0)
	{
		if (((unsigned char *)str)[i] == (unsigned char)c)
			return (((char *)str) + i);
		i--;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("Character in position 0: %s\n", ft_strrchr("Hello", 'H'));
	printf("Character in position 4: %s\n", ft_strrchr("Hello", 'o'));
	printf("Double occurence: %s\n", ft_strrchr("Hello", 'l'));
	printf("Null character: %s\n", ft_strrchr("Hello", '\0'));
	printf("Character not in string: %s\n", ft_strrchr("Hello", 'j'));
}
 */
