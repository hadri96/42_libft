/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorand <hmorand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 17:05:00 by hmorand           #+#    #+#             */
/*   Updated: 2023/08/15 09:14:12 by hmorand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
		ft_putchar_fd('-', fd);
	if (n > 0)
		n = -n;
	if (n < -9)
		ft_putnbr_fd(-(n / 10), fd);
	ft_putchar_fd('0' -(n % 10), fd);
}
/*
int	main(void)
{
	ft_putnbr_fd(10000043, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(-10000043, 1);
}
 */
