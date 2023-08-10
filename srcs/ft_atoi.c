/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorand <hmorand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 23:32:33 by hmorand           #+#    #+#             */
/*   Updated: 2023/08/10 18:42:53 by hmorand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	static	ft_isspace(char c)
{
	if ((c >= 9 && c <= 13) || c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	result;
	int	sign;
	int	signs;

	signs = 0;
	sign = 1;
	result = 0;
	while (*str)
	{
		if (result == 0 && signs == 0 && ft_isspace(*str))
			;
		else if ((*str == '-' || *str == '+') && result == 0)
		{
			if (*str == '-')
				sign *= -1;
			signs++;
		}
		else if (*str >= '0' && *str <= '9')
			result = result * 10 + (*str - '0');
		else
			return (sign * result);
		str++;
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
	printf("Valid with many signs in front: %d\n",
		   ft_atoi("  --+-+123345"));
}
 */
