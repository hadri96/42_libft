/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorand <hmorand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 18:43:36 by hmorand           #+#    #+#             */
/*   Updated: 2023/08/10 18:49:33 by hmorand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(char *str)
{
	while (*str)
	{
		if (*str < 0 || *str > 127)
			return (0);
		str++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("Uppercase: %d\n", ft_isascii("KAJHSKASHKDFHKWHD"));
	printf("Lowercase: %d\n", ft_isascii("akhdkhdkahsdkjsahd"));
	printf("Letters: %d\n", ft_isascii("skhAJKHSKJhaKJH"));
	printf("Letters and numbers: %d\n", ft_isascii("akdhadh23323"));
	printf("Numbers: %d\n", ft_isascii("23323"));
	printf("Special characters: %d\n", ft_isascii("+~{}&"));
	printf("Non-ascii characters: %d\n", ft_isascii("中國的"));
}
 */
