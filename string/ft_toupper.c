/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorand <hmorand@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 14:35:55 by hmorand           #+#    #+#             */
/*   Updated: 2024/02/21 14:35:55 by hmorand          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_toupper(int c)
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
