/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorand <hmorand@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 14:37:22 by hmorand           #+#    #+#             */
/*   Updated: 2024/02/21 14:37:22 by hmorand          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	static	ft_isspace(char c)
{
	if ((c >= 9 && c <= 13) || c == ' ')
		return (1);
	return (0);
}

void	static	ft_strip(const char *str, int *i, int *result)
{
	*result = 0;
	*i = 0;
	while (ft_isspace(str[*i]))
		(*i)++;
}

void	static	ft_sign(const char c, int *signs, int *sign)
{
	(*signs)++;
	if (c == '-')
		(*sign) *= -1;
}

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;
	int	signs;
	int	i;

	signs = 0;
	sign = 1;
	ft_strip(str, &i, &result);
	while (str[i])
	{
		if ((str[i] == '-' || str[i] == '+') && result == 0 && signs == 0)
			ft_sign(str[i], &signs, &sign);
		else if (str[i] >= '0' && str[i] <= '9')
		{
			signs++;
			result = result * 10 + (str[i] - '0');
		}
		else
			return (sign * result);
		i++;
	}
	return (sign * result);
}
/*
#include <stdio.h>

int main(void)
{
	printf("Int min: %d\n", ft_atoi("-2147483648"));
	printf("Int max: %d\n", ft_atoi("2147483647"));
	printf("Zero: %d\n", ft_atoi("0"));
	printf("Random positive number: %d\n", ft_atoi("1829817"));
	printf("Random positive number: %d\n", ft_atoi("928937"));
	printf("Random negative number: %d\n", ft_atoi("-918237"));
	printf("Random negative number: %d\n", ft_atoi("-123453"));
	printf("Invalid with space in between signs: %d\n",
	 ft_atoi("  - 123453"));
	printf("Invalid with wrong sign: %d\n",
		   ft_atoi("  -* 123453"));
	printf("Invalid with letter: %d\n",
		   ft_atoi("  -A123453"));
	printf("Valid with letter in the middle: %d\n",
		   ft_atoi("  -1234AD53"));
	printf("Invalid with many signs in front: %d\n",
		   ft_atoi("  --+-+123345"));
	printf("Valid with 0 separated by space: %d\n",
		   ft_atoi("0 49"));
}

 */
