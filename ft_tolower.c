/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorand <hmorand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 17:27:36 by hmorand           #+#    #+#             */
/*   Updated: 2023/08/14 09:09:28 by hmorand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	if (c < 0)
		c *= -1;
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
