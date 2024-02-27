/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arr_pop.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorand <hmorand@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 09:56:51 by hmorand           #+#    #+#             */
/*   Updated: 2024/02/27 09:56:51 by hmorand          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	**strarr_pop(char **arr, int index)
{
	int		size;
	int		i;
	char	**new_arr;

	size = strarr_len(arr);
	if (index >= size)
		return (NULL);
	new_arr = galloc(sizeof(char *) * (size - 1) + 1);
	if (new_arr)
		return (NULL);
	i = -1;
	while (++i < size)
	{
		if (i < index)
			new_arr[i] = ft_strdup(arr[i]);
		else if (i > index)
			new_arr[i - 1] = ft_strdup(arr[i]);
	}
	free_strarr(arr);
	new_arr[i - 1] = NULL;
	return (new_arr);
}

/* int main(void)
{
	char **arr = (char **)galloc(sizeof(char *) * 5);
	arr[0] = ft_strdup("Hello");
	arr[1] = ft_strdup("World");
	arr[2] = ft_strdup("Copilot");
	arr[3] = ft_strdup("GitHub");
	arr[4] = ft_strdup("Assistant");

	ft_printf("Original array:\n");
	for (int i = 0; i < 5; i++)
	{
		ft_printf("%s\n", arr[i]);
	}

	ft_printf("\n");

	// Test normal case
	int index = 2;
	char **new_arr = strarr_pop(arr, index);
	ft_printf("Array after removing element at index %d:\n", index);
	for (int i = 0; i < 4; i++)
	{
		ft_printf("%s\n", new_arr[i]);
	}

	ft_printf("\n");

	// Test edge case
	index = 0;
	new_arr = strarr_pop(arr, index);
	ft_printf("Array after removing element at index %d:\n", index);
	for (int i = 0; i < 3; i++)
	{
		ft_printf("%s\n", new_arr[i]);
	}

	ft_printf("\n");

	// Test error case
	index = 5;
	new_arr = strarr_pop(arr, index);
	if (new_arr == NULL)
	{
		ft_printf("Error: Index out of range\n");
	}

	free_strarr(arr);
	free_strarr(new_arr);

	return (0);
} */
