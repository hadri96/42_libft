/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorand <hmorand@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 14:34:37 by hmorand           #+#    #+#             */
/*   Updated: 2024/02/21 14:34:37 by hmorand          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_putchar(char c, int *i)
{
	int	err;

	err = write(1, &c, 1);
	if (err == -1)
		*i -= 10000;
	else
		*i += 1;
}

void	ft_putstr(char *str, int *i)
{
	int	j;

	j = 0;
	if (!str)
	{
		ft_putstr("(null)", i);
		return ;
	}
	while (str[j])
		ft_putchar(str[j++], i);
}
