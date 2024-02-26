/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorand <hmorand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 11:02:36 by hmorand           #+#    #+#             */
/*   Updated: 2023/08/14 13:57:20 by hmorand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || \
		(c >= 'A' && c <= 'Z') || \
		(c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("Uppercase: %d\n", ft_isalnum('K'));
	printf("Lowercase: %d\n", ft_isalnum('b'));
	printf("Numbers: %d\n", ft_isalnum('2'));
	printf("Special characters: %d\n", ft_isalnum('}'));
}
 */
