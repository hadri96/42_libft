/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorand <hmorand@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 14:34:56 by hmorand           #+#    #+#             */
/*   Updated: 2024/02/21 14:34:56 by hmorand          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_putnbr(int nb, int *i)
{
	if (nb >= 0)
		nb = -nb;
	else
		ft_putchar('-', i);
	if (nb < -9)
		ft_putnbr(-(nb / 10), i);
	ft_putchar('0' - (nb % 10), i);
}

void	ft_putunnbr(unsigned int nb, int *i)
{
	if (nb > 9)
		ft_putunnbr(nb / 10, i);
	ft_putchar('0' + (nb % 10), i);
}

/* int main()
{
    int i, j;

    // Normal Cases
    i = j = 0;
	ft_putstr("\n\n-------- unsigned integers --------\n\n", &i);
	ft_putstr("------------ integers ------------", &i);
    ft_putstr("Expected: 123\nActual: ", &i);
    ft_putunnbr(123, &j);
    ft_putstr("\nCharacters printed (value only): ", &i);
	ft_putnbr(j, &i);
    ft_putstr("\n\n", &i);

    i = j = 0;
    ft_putstr("Expected: 45\nActual: ", &i);
    ft_putunnbr(45, &j);
    ft_putstr("\nCharacters printed (value only): ", &i);
	ft_putnbr(j, &i);
    ft_putstr("\n\n", &i);

    i = j = 0;
    ft_putstr("Expected: 7890\nActual: ", &i);
    ft_putunnbr(7890, &j);
    ft_putstr("\nCharacters printed (value only): ", &i);
	ft_putnbr(j, &i);
    ft_putstr("\n\n", &i);

    // Edge Cases
    // smallest possible unsigned int
    i = j = 0;
    ft_putstr("Expected: 0\nActual: ", &i);
    ft_putunnbr(0, &j);
    ft_putstr("\nCharacters printed (value only): ", &i);
	ft_putnbr(j, &i);
    ft_putstr("\n\n", &i);

    // smallest non-zero unsigned int
    i = j = 0;
    ft_putstr("Expected: 1\nActual: ", &i);
    ft_putunnbr(1, &j);
    ft_putstr("\nCharacters printed (value only): ", &i);
	ft_putnbr(j, &i);
    ft_putstr("\n\n", &i);

    // largest possible unsigned int (for 32-bit systems)
    i = j = 0;
    ft_putstr("Expected: 4294967295\nActual: ", &i);
    ft_putunnbr(4294967295, &j);
    ft_putstr("\nCharacters printed (value only): ", &i);
	ft_putnbr(j, &i);

	ft_putstr("\n\n------------ integers ------------\n\n", &i);

	i = j = 0;
    ft_putstr("Expected: -123\nActual: ", &i);
    ft_putnbr(123, &j);   // Since your function inverts signs
    ft_putstr("\nCharacters printed (value only): ", &i);
    ft_putnbr(j, &i);
    ft_putstr("\n\n", &i);

    i = j = 0;
    ft_putstr("Expected: 45\nActual: ", &i);
    ft_putnbr(-45, &j);   // Since your function inverts signs
    ft_putstr("\nCharacters printed (value only): ", &i);
    ft_putnbr(j, &i);
    ft_putstr("\n\n", &i);

    i = j = 0;
    ft_putstr("Expected: -7890\nActual: ", &i);
    ft_putnbr(7890, &j);   // Since your function inverts signs
    ft_putstr("\nCharacters printed (value only): ", &i);
    ft_putnbr(j, &i);
    ft_putstr("\n\n", &i);

    // Edge Cases
    // smallest possible int (for 32-bit systems, typically -2147483648)
    i = j = 0;
    ft_putstr("Expected: 2147483648\nActual: ", &i);
    ft_putnbr(-2147483648, &j);  // Remember the inversion of sign
    ft_putstr("\nCharacters printed (value only): ", &i);
    ft_putnbr(j, &i);
    ft_putstr("\n\n", &i);

    // zero
    i = j = 0;
    ft_putstr("Expected: 0\nActual: ", &i);
    ft_putnbr(0, &j);   // No sign inversion for 0
    ft_putstr("\nCharacters printed (value only): ", &i);
    ft_putnbr(j, &i);
    ft_putstr("\n\n", &i);

    // smallest positive int (1, but
    // it will be printed as -1 due to sign inversion)
    i = j = 0;
    ft_putstr("Expected: -1\nActual: ", &i);
    ft_putnbr(1, &j);
    ft_putstr("\nCharacters printed (value only): ", &i);
    ft_putnbr(j, &i);
    ft_putstr("\n\n", &i);

    return 0;
}
 */
