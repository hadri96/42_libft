/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorand <hmorand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 16:26:16 by hmorand           #+#    #+#             */
/*   Updated: 2023/08/14 08:44:05 by hmorand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str);
	if (c == '\0')
		return ((char *)str + i);
	while (i >= 0)
	{
		if (str[i] == c)
			return ((char *)str + i);
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
