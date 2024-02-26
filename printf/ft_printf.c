/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorand <hmorand@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 14:34:14 by hmorand           #+#    #+#             */
/*   Updated: 2024/02/21 14:34:14 by hmorand          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	print_arg(char type, va_list elements, int *i)
{
	if (type == 'c')
		ft_putchar(va_arg(elements, int), i);
	else if (type == 's')
		ft_putstr(va_arg(elements, char *), i);
	else if (type == 'p')
		ft_putptr(va_arg(elements, void *), i);
	else if (type == 'd' || type == 'i')
		ft_putnbr(va_arg(elements, int), i);
	else if (type == 'u')
		ft_putunnbr(va_arg(elements, unsigned int), i);
	else if (type == 'x')
		ft_puthex_low(va_arg(elements, unsigned int), i);
	else if (type == 'X')
		ft_puthex_up(va_arg(elements, unsigned int), i);
	else if (type == '%')
		ft_putchar('%', i);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		j;
	int		err;
	va_list	elements;

	va_start(elements, str);
	i = 0;
	j = 0;
	err = 0;
	while (str[j])
	{
		if (str[j] == '%')
			print_arg(str[++j], elements, &i);
		else
			ft_putchar(str[j], &i);
		j++;
		if (err > i)
			return (-1);
		else
			err = i;
	}
	va_end(elements);
	return (i);
}
