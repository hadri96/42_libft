/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorand <hmorand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 16:26:16 by hmorand           #+#    #+#             */
/*   Updated: 2023/08/10 16:41:38 by hmorand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strrchr(char *str, int c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			str += i;
			i = 0;
		}
		i++;
		j++;
	}
	if (c == '\0')
		return (str + i);
	if (i == j && *str != c)
		return (NULL);
	return (str);
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
