/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorand <hmorand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:32:57 by hmorand           #+#    #+#             */
/*   Updated: 2023/08/09 23:10:03 by hmorand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("Only uppercase: %d\n", ft_isdigit("KAJHSKASHKDFHKWHD"));
	printf("Only lowercase: %d\n", ft_isdigit("akhdkhdkahsdkjsahd"));
	printf("Mixed cases lowercase: %d\n", ft_isdigit("skhAJKHSKJhaKJH"));
	printf("Mixed numbers and letters: %d\n", ft_isdigit("akdhadh23323"));
	printf("Only numbers: %d\n", ft_isdigit("23323"));
}
 */
