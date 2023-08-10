/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorand <hmorand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 20:08:03 by hmorand           #+#    #+#             */
/*   Updated: 2023/08/10 16:15:20 by hmorand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	static	n_digits(int nb)
{
	int	i;

	if (nb == 0)
		return (1);
	i = 0;
	if (nb < 0)
		i++;
	while (nb)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nb)
{
	int		len_num;
	int		i;
	char	*result;

	len_num = n_digits(nb);
	result = malloc(sizeof(char) * len_num + 1);
	if (!result)
		return (NULL);
	if (nb < 0)
		result[0] = '-';
	if (!nb)
		result[0] = '0';
	i = 0;
	while (nb)
	{
		if (nb < 0)
			result[len_num - i++ - 1] = '0' + -(nb % 10);
		else
			result[len_num - i++ - 1] = '0' + nb % 10;
		nb /= 10;
	}
	result[len_num] = '\0';
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("Int min: %s\n", ft_itoa(-2147483648));
	printf("Int max: %s\n", ft_itoa(2147483647));
	printf("Zero: %s\n", ft_itoa(0));
	printf("Random positive number: %s\n", ft_itoa(1829817));
	printf("Random positive number: %s\n", ft_itoa(928937));
	printf("Random negative number: %s\n", ft_itoa(-918237));
	printf("Random negative number: %s\n", ft_itoa(-123453));
}
 */
