/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selee <selee@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 09:15:04 by selee             #+#    #+#             */
/*   Updated: 2020/12/09 19:55:24 by selee            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdbool.h>

static int		count_words(const char *text, char sep)
{
	int		count;
	int		index;
	bool	in_a_word;
	char	c;

	index = 0;
	count = 0;
	in_a_word = false;
	while (text[index] != '\0')
	{
		c = text[index];
		if (in_a_word)
		{
			if (c == sep)
				in_a_word = false;
		}
		else if (c != sep)
		{
			in_a_word = true;
			count += 1;
		}
		index += 1;
	}
	return (count);
}

static int		word_lenght(char const *string, char end)
{
	int		len;

	len = 0;
	while (string[len] != '\0' && string[len] != end)
		len += 1;
	return (len);
}

static char		*get_word(const char *string, char sep)
{
	char	*result;
	int		len;

	len = word_lenght(string, sep);
	result = malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	ft_memcpy(result, string, len);
	result[len] = '\0';
	return (result);
}

char			**ft_split(const char *string, char sep)
{
	char	**words;
	int		word_index;
	int		index;
	bool	in_a_word;

	if (!(words = malloc((count_words(string, sep) + 1) * sizeof(char*))))
		return (NULL);
	index = 0;
	word_index = 0;
	in_a_word = false;
	while (string[index] != '\0')
	{
		if (in_a_word)
		{
			if (string[index] == sep)
				in_a_word = false;
		}
		else if (string[index] != sep)
		{
			in_a_word = true;
			words[word_index++] = get_word(&string[index], sep);
		}
		index += 1;
	}
	words[count_words(string, sep)] = NULL;
	return (words);
}
