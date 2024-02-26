/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorand <hmorand@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 14:36:02 by hmorand           #+#    #+#             */
/*   Updated: 2024/02/21 14:36:02 by hmorand          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char c1 = ft_tolower('A');
	char c2 = ft_tolower('a');
	char c3 = ft_tolower('D');

	printf("Uppercase char: %c\n", c1);
	printf("Lowercase char: %c\n", c2);
	printf("Uppercase char: %c\n", c3);
	printf("Negative hexadecimal: %u", tolower('\200'));
}
 */
