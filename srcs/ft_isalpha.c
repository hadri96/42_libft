/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorand <hmorand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:23:59 by hmorand           #+#    #+#             */
/*   Updated: 2023/08/09 11:32:45 by hmorand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(char *str)
{
	while (*str)
	{
		if (!(*str >= 'a' && *str <= 'z') && !(*str >= 'A' && *str <= 'Z'))
			return (0);
		str++;
	}
	return (1);
}

/* #include <stdio.h>

int	main(void)
{
	printf("Only uppercase: %d\n", ft_isalpha("KAJHSKASHKDFHKWHD"));
	printf("Only lowercase: %d\n", ft_isalpha("akhdkhdkahsdkjsahd"));
	printf("Mixed cases lowercase: %d\n", ft_isalpha("skhAJKHSKJhaKJH"));
	printf("Mixed numbers and letters: %d\n", ft_isalpha("akdhadh23323"));
	printf("Only numbers: %d\n", ft_isalpha("23323"));
}
 */
