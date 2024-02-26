/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorand <hmorand@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 14:35:21 by hmorand           #+#    #+#             */
/*   Updated: 2024/02/21 14:35:21 by hmorand          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

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
