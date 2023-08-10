/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorand <hmorand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 17:24:47 by hmorand           #+#    #+#             */
/*   Updated: 2023/08/09 23:10:12 by hmorand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(char *str)
{
	while (*str)
	{
		if (*str < ' ' || *str > '~')
			return (0);
		str++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("Only uppercase: %d\n", ft_isprint("KAJHSKASHKDFHKWHD"));
	printf("Only lowercase: %d\n", ft_isprint("akhdkhdkahsdkjsahd"));
	printf("Mixed cases lowercase: %d\n", ft_isprint("skhAJKHSKJhaKJH"));
	printf("With non-printable: %d\n", ft_isprint("akdh\tadh23323"));
}
 */
