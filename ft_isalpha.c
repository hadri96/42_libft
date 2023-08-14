/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorand <hmorand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:23:59 by hmorand           #+#    #+#             */
/*   Updated: 2023/08/14 10:26:02 by hmorand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
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
