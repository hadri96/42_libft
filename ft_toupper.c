/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorand <hmorand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 19:51:34 by hmorand           #+#    #+#             */
/*   Updated: 2023/08/14 10:42:37 by hmorand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

/* #include <stdio.h>

int	main(void)
{
	char c1 = ft_toupper('A');
	char c2 = ft_toupper('a');
	char c3 = ft_toupper('D');

	printf("Uppercase char: %c\n", c1);
	printf("Lowercase char: %c\n", c2);
	printf("Lowercase char: %c", c3);
}
 */
