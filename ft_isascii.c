/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorand <hmorand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 18:43:36 by hmorand           #+#    #+#             */
/*   Updated: 2023/08/13 10:24:16 by hmorand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(char c)
{
	if (c < 0 || c > 127)
		return (0);
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("Uppercase: %d\n", ft_isascii('K'));
	printf("Lowercase: %d\n", ft_isascii('a'));
	printf("Numbers: %d\n", ft_isascii('2'));
	printf("Special characters: %d\n", ft_isascii('}'));
	printf("Non-ascii characters: %d\n", ft_isascii('中'));
}
 */
