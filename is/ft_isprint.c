/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorand <hmorand@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 14:31:33 by hmorand           #+#    #+#             */
/*   Updated: 2024/02/21 14:32:05 by hmorand          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("Uppercase: %d\n", ft_isprint('H'));
	printf("Lowercase: %d\n", ft_isprint('a'));
	printf("With non-printable: %d\n", ft_isprint('\t'));
}
 */
