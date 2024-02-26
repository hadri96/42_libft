/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorand <hmorand@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 14:31:24 by hmorand           #+#    #+#             */
/*   Updated: 2024/02/21 14:31:26 by hmorand          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_isdigit(int c)
{
	if (c < '0' || c > '9')
		return (0);
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("Uppercase: %d\n", ft_isdigit('H));
	printf("Lowercase: %d\n", ft_isdigit('a));
	printf("Number: %d\n", ft_isdigit('5'));
}
 */
