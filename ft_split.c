/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfaria-m <lfaria-m@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:38:05 by lfaria-m          #+#    #+#             */
/*   Updated: 2024/10/08 09:38:20 by lfaria-m         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *s, char c)
{
	int	tot_words;
	int	in_word;

	tot_words = 0;
	in_word = 0;
	if (c == '\0')
	{
		if (*s != '\0')
			return (1);
		else
			return (0);
	}
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			tot_words ++;
		}
		else if (*s == c)
			in_word = 0;
		s ++;
	}
	return (tot_words);
}

char	*ft_word(char const *s, char c)
{
	char	*word;
	int		word_len;

	word_len = 0;
	while (s[word_len] && s[word_len] != c)
		word_len ++;
	word = (char *)malloc(sizeof(char) * (word_len + 1));
	if (!word)
		return (0);
	ft_memcpy(word, s, word_len);
	word[word_len] = '\0';
	return (word);
}

char	**handle_empty(char const *s, char c)
{
	char	**result;

	if (*s == '\0')
	{
		result = (char **)malloc(sizeof(char *) * 1);
		if (!result)
			return (0);
		result[0] = 0;
		return (result);
	}
	result = (char **)malloc(sizeof(char *) * 2);
	if (!result)
		return (0);
	result[0] = ft_word(s, c);
	if (!result[0])
	{
		free(result);
		return (0);
	}
	result[1] = 0;
	return (result);
}

static int	fill_result(char **result, const char *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			result[i] = ft_word(s, c);
			if (!result[i])
			{
				while (i >= 0)
					free(result[i--]);
				free(result);
			}
			s += ft_strlen(result[i++]);
		}
	}
	result[i] = 0;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (c == '\0')
		return (handle_empty(s, c));
	result = (char **) malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!result)
		return (0);
	if (!fill_result(result, s, c))
		return (0);
	return (result);
}
