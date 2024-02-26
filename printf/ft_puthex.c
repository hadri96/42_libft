/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorand <hmorand@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 14:34:23 by hmorand           #+#    #+#             */
/*   Updated: 2024/02/21 14:34:23 by hmorand          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_puthex_long(long unsigned int nb, int *i)
{
	if (nb > 15)
		ft_puthex_long(nb / 16, i);
	ft_putchar("0123456789abcdef"[nb % 16], i);
}

void	ft_puthex_up(unsigned int nb, int *i)
{
	if (nb > 15)
		ft_puthex_up(nb / 16, i);
	ft_putchar("0123456789ABCDEF"[nb % 16], i);
}

void	ft_puthex_low(unsigned int nb, int *i)
{
	if (nb > 15)
		ft_puthex_low(nb / 16, i);
	ft_putchar("0123456789abcdef"[nb % 16], i);
}

/* int main()
{
    int i, j;

    ft_putstr("\n\n-------- Hexadecimal Long Numbers --------\n\n", &i);

    // Normal Cases
    i = j = 0;
    ft_putstr("Expected: A\nActual: ", &i);
    ft_puthex_long(10, &j);
    ft_putstr("\nCharacters printed (value only): ", &i);
    ft_putnbr(j, &i);
    ft_putstr("\n\n", &i);

    i = j = 0;
    ft_putstr("Expected: 64\nActual: ", &i);
    ft_puthex_long(100, &j);
    ft_putstr("\nCharacters printed (value only): ", &i);
    ft_putnbr(j, &i);
    ft_putstr("\n\n", &i);

    i = j = 0;
    ft_putstr("Expected: FA\nActual: ", &i);
    ft_puthex_long(250, &j);
    ft_putstr("\nCharacters printed (value only): ", &i);
    ft_putnbr(j, &i);
    ft_putstr("\n\n", &i);

    // Edge Cases
    // smallest possible long unsigned int
    i = j = 0;
    ft_putstr("Expected: 0\nActual: ", &i);
    ft_puthex_long(0, &j);
    ft_putstr("\nCharacters printed (value only): ", &i);
    ft_putnbr(j, &i);
    ft_putstr("\n\n", &i);

    // a large number
    i = j = 0;
    ft_putstr("Expected hexadecimal for large number:\nActual: ", &i);
    ft_puthex_long(9876543210, &j);
    ft_putstr("\nCharacters printed (value only): ", &i);
    ft_putnbr(j, &i);
    ft_putstr("\n\n", &i);

    // a very large number (assuming 64-bit system)
    i = j = 0;
    ft_putstr("Expected hexadecimal for very large number:\nActual: ", &i);
    ft_puthex_long(9223372036854775807, &j);
    // Maximum value for signed long int (as unsigned)
    ft_putstr("\nCharacters printed (value only): ", &i);
    ft_putnbr(j, &i);
    ft_putstr("\n\n", &i);

	ft_putstr("\n\n-------- Hexadecimal Uppercase Numbers --------\n\n", &i);

    // Normal Cases
    i = j = 0;
    ft_putstr("Expected: A\nActual: ", &i);
    ft_puthex_up(10, &j);
    ft_putstr("\nCharacters printed (value only): ", &i);
    ft_putnbr(j, &i);
    ft_putstr("\n\n", &i);

    i = j = 0;
    ft_putstr("Expected: 64\nActual: ", &i);
    ft_puthex_up(100, &j);
    ft_putstr("\nCharacters printed (value only): ", &i);
    ft_putnbr(j, &i);
    ft_putstr("\n\n", &i);

    i = j = 0;
    ft_putstr("Expected: FA\nActual: ", &i);
    ft_puthex_up(250, &j);
    ft_putstr("\nCharacters printed (value only): ", &i);
    ft_putnbr(j, &i);
    ft_putstr("\n\n", &i);

    // Edge Cases
    // smallest possible unsigned int
    i = j = 0;
    ft_putstr("Expected: 0\nActual: ", &i);
    ft_puthex_up(0, &j);
    ft_putstr("\nCharacters printed (value only): ", &i);
    ft_putnbr(j, &i);
    ft_putstr("\n\n", &i);

    // a larger number (but still within 32-bit unsigned int limit)
    i = j = 0;
    ft_putstr("Expected hexadecimal for a larger number:\nActual: ", &i);
    ft_puthex_up(429495, &j);
    ft_putstr("\nCharacters printed (value only): ", &i);
    ft_putnbr(j, &i);
    ft_putstr("\n\n", &i);

    // largest possible unsigned int (assuming 32-bit system)
    i = j = 0;
    ft_putstr("Expected: FFFFFFFF\nActual: ", &i);
    ft_puthex_up(4294967295, &j);
    ft_putstr("\nCharacters printed (value only): ", &i);
    ft_putnbr(j, &i);
    ft_putstr("\n\n", &i);

	ft_putstr("\n-------- Hexadecimal Lowercase Numbers --------\n\n", &i);

    // Normal Cases
    i = j = 0;
    ft_putstr("Expected: a\nActual: ", &i);
    ft_puthex_low(10, &j);
    ft_putstr("\nCharacters printed (value only): ", &i);
    ft_putnbr(j, &i);
    ft_putstr("\n\n", &i);

    i = j = 0;
    ft_putstr("Expected: 64\nActual: ", &i);
    ft_puthex_low(100, &j);
    ft_putstr("\nCharacters printed (value only): ", &i);
    ft_putnbr(j, &i);
    ft_putstr("\n\n", &i);

    i = j = 0;
    ft_putstr("Expected: fa\nActual: ", &i);
    ft_puthex_low(250, &j);
    ft_putstr("\nCharacters printed (value only): ", &i);
    ft_putnbr(j, &i);
    ft_putstr("\n\n", &i);

    // Edge Cases
    // smallest possible unsigned int
    i = j = 0;
    ft_putstr("Expected: 0\nActual: ", &i);
    ft_puthex_low(0, &j);
    ft_putstr("\nCharacters printed (value only): ", &i);
    ft_putnbr(j, &i);
    ft_putstr("\n\n", &i);

    // a larger number (but still within 32-bit unsigned int limit)
    i = j = 0;
    ft_putstr("Expected hexadecimal for a larger number:\nActual: ", &i);
    ft_puthex_low(429495, &j);
    ft_putstr("\nCharacters printed (value only): ", &i);
    ft_putnbr(j, &i);
    ft_putstr("\n\n", &i);

    // largest possible unsigned int (assuming 32-bit system)
    i = j = 0;
    ft_putstr("Expected: ffffffff\nActual: ", &i);
    ft_puthex_low(4294967295, &j);
    ft_putstr("\nCharacters printed (value only): ", &i);
    ft_putnbr(j, &i);
    ft_putstr("\n\n", &i);

    return 0;
}
 */
