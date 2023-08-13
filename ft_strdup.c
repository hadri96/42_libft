/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorand <hmorand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 19:54:04 by hmorand           #+#    #+#             */
/*   Updated: 2023/08/13 10:41:54 by hmorand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *str)
{
	int		i;
	char	*copy;

	i = 0;
	while (str[i])
		i++;
	copy = malloc(sizeof(char) * i + 1);
	if (!copy)
		return (NULL);
	i = -1;
	while (str[++i])
		copy[i] = str[i];
	copy[i] = '\0';
	return (copy);
}
/*
#include <stdio.h>

int	main(void)
{
	char *str1 = "Hello";
	printf("Copy of \"Hello\": \"%s\"\n", ft_strdup(str1));

	char *str2 = " ";
	printf("Copy of \" \": \"%s\"\n", ft_strdup(str2));

	char *str3 = "";
	printf("Copy of \"\": \"%s\"\n", ft_strdup(str3));

	char *str4= "\t";
	printf("Copy of \"\t\": \"%s\"\n", ft_strdup(str4));

	char *str5 = "random string";
	printf("Copy of \"random string\": \"%s\"\n", ft_strdup(str5));
}
 */
