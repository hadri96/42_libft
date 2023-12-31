/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorand <hmorand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:23:59 by hmorand           #+#    #+#             */
/*   Updated: 2023/08/14 13:57:12 by hmorand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
