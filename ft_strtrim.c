/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorand <hmorand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 09:51:57 by hmorand           #+#    #+#             */
/*   Updated: 2023/08/15 21:11:21 by hmorand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*result;

	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (s1[end - 1] && ft_strrchr(set, s1[end - 1]) && end > start)
		end--;
	result = ft_substr(s1, start, end - start);
	return (result);
}
/*
int	main(void)
{
	ft_putstr_fd("Test n°1 - basic input: ", 1);
	ft_putendl_fd(ft_strtrim("hello", "ho"), 1);
	ft_putstr_fd("Test n°2 - blank string: ", 1);
	ft_putendl_fd(ft_strtrim("      ", " "), 1);
	ft_putstr_fd("Test n°3 - empty string: ", 1);
	ft_putendl_fd(ft_strtrim("", " "), 1);
	ft_putstr_fd("Test n°4 - basic string: ", 1);
	ft_putendl_fd(ft_strtrim("lorem ipsum dolor sit amet", "et"), 1);
}
 */
