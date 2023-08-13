/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorand <hmorand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 17:24:47 by hmorand           #+#    #+#             */
/*   Updated: 2023/08/13 10:25:42 by hmorand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(char c)
{
	if (c < ' ' || c > '~')
		return (0);
	return (1);
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
