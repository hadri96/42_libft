/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoll.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorand <hmorand@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 15:09:59 by hmorand           #+#    #+#             */
/*   Updated: 2024/04/26 15:10:20 by hmorand          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	static	ft_isspace(char c)
{
	if ((c >= 9 && c <= 13) || c == ' ')
		return (1);
	return (0);
}

void	static	ft_strip(const char *str, int *i, long long *result)
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

long long	ft_atoll(const char *str)
{
	long long	result;
	int			sign;
	int			signs;
	int			i;

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
