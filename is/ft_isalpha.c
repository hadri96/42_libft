/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorand <hmorand@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 14:31:12 by hmorand           #+#    #+#             */
/*   Updated: 2024/02/21 14:31:12 by hmorand          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || \
		(c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

/* #include <stdio.h>

int	main(void)
{
	printf("Uppercase: %d\n", ft_isalpha('F'));
	printf("Lowercase: %d\n", ft_isalpha('a'));
	printf("Number: %d\n", ft_isalpha('4'));
}
 */
