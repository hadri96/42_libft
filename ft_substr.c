/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorand <hmorand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:12:50 by hmorand           #+#    #+#             */
/*   Updated: 2023/08/14 16:24:31 by hmorand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	size;
	size_t	i;

	size = ft_strlen(s);
	if (size < start + len && size > start)
		len = size - start;
	else if (size <= start)
	{
		len = 0;
		start = 0;
	}
	result = malloc(sizeof(char) * len + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (s[start] && len)
	{
		len--;
		result[i++] = s[start++];
	}
	result[i] = '\0';
	return (result);
}
