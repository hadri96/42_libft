/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorand <hmorand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 15:31:31 by hmorand           #+#    #+#             */
/*   Updated: 2023/08/26 10:21:51 by hmorand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	count_words(char const *s, char c)
{
	size_t	words;
	size_t	letters;

	words = 0;
	while (*s)
	{
		letters = 0;
		while (s[letters] && s[letters] != c)
			letters++;
		if (letters > 0)
		{
			words += 1;
			s += letters;
		}
		else
			s++;
	}
	return (words);
}

static	size_t	next_word(char const *s, char c)
{
	size_t	sep;

	if (!s[0])
		return (0);
	sep = 0;
	while (s[sep] && s[sep] != c)
		sep++;
	return (sep);
}

static	char	*extract_word(char const *s, size_t sep)
{
	char	*word;
	size_t	i;

	word = malloc(sizeof(char) * sep + 1);
	if (!word)
		return (NULL);
	i = -1;
	while (++i < sep)
		word[i] = s[i];
	word[sep] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	char	*word;
	size_t	j;
	size_t	sep;
	size_t	words;

	words = count_words(s, c);
	result = malloc(sizeof(char *) * (words + 1));
	if (!result)
		return (NULL);
	j = 0;
	while (*s == c)
		s++;
	while (j < words && *s)
	{
		sep = next_word(s, c);
		if (sep > 0)
		{
			word = extract_word(s, sep);
			result[j++] = word;
		}
		s += sep + 1;
	}
	result[j] = NULL;
	return (result);
}

/* #include <stdio.h>

int	main(void)
{
	char **words = ft_split("   lorem   ipsum dolor     sit amet, \
consectetur   adipiscing elit. Sed non risus. Suspendisse   ", ' ');
	for (int i = 0; words[i]; i++)
	{
		printf("%s$\n", words[i]);
		free(words[i]);
	}
	free(words);
	char **words2 = ft_split("lorem ipsum dolor sit amet, \
consectetur adipiscing elit. Sed non risus. Suspendisse", ' ');
	for (int j = 0; words2[j]; j++)
	{
		printf("%s$\n", words2[j]);
		free(words2[j]);
	}
	free(words2);
	char **words3 = ft_split("lorem", ' ');
	for (int k = 0; words3[k]; k++)
	{
		printf("%s$\n", words3[k]);
		free(words3[k]);
	}
	free(words3);
	char **words4 = ft_split("xxxxxxxxhello!", 'x');
	for (int l = 0; words4[l]; l++)
	{
		printf("%s$\n", words4[l]);
		free(words4[l]);
	}
	free(words4);
	char **words5 = ft_split("hello!", ' ');
	for (int m = 0; words5[m]; m++)
	{
		printf("%s$\n", words5[m]);
		free(words5[m]);
	}
	free(words5);
	char **words6 = ft_split("--1-2--3---4----5-----42", '-');
	for (int n = 0; words6[n]; n++)
	{
		printf("%s$\n", words6[n]);
		free(words6[n]);
	}
	free(words6);
	printf("Number of words: %zu", count_words("--1-2--3---4----5-----42", '-'));
}
 */
