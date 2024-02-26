/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorand <hmorand@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 14:34:48 by hmorand           #+#    #+#             */
/*   Updated: 2024/02/21 14:34:48 by hmorand          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_putptr(void *ptr, int *i)
{
	unsigned long	location;

	location = (unsigned long) ptr;
	ft_putstr("0x", i);
	ft_puthex_long(location, i);
}

/* int main()
{
    int i, j;
    int test_variable;
    // We'll use the address of this variable for one of the tests.

    ft_putstr("\n\n-------- Pointers --------\n\n", &i);

    // Note: Expected results cannot be hard-coded as
    // memory addresses can vary on each run.

    // Test 1
    i = j = 0;
    ft_putstr("Address of test_variable:\nActual: ", &i);
    ft_putptr(&test_variable, &j);
    ft_putstr("\nCharacters printed (value only): ", &i);
    ft_putnbr(j, &i);
    ft_putstr("\n\n", &i);

    // Test 2: NULL pointer
    i = j = 0;
    ft_putstr("Expected NULL (0x0) pointer:\nActual: ", &i);
    ft_putptr(NULL, &j);
    ft_putstr("\nCharacters printed (value only): ", &i);
    ft_putnbr(j, &i);
    ft_putstr("\n\n", &i);

    // Test 3: Some arbitrary pointer
    int someArray[10];
    i = j = 0;
    ft_putstr("Address of someArray:\nActual: ", &i);
    ft_putptr(someArray, &j);
    ft_putstr("\nCharacters printed (value only): ", &i);
    ft_putnbr(j, &i);
    ft_putstr("\n\n", &i);

    // Note: It's a bit tricky to have "expected" results for
    // pointers since they can vary.
    // You're primarily testing if the function can print a
    // pointer without errors and counting the characters it printed.

    return 0;
} */
