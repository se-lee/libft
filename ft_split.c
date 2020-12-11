/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selee <selee@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 09:15:04 by selee             #+#    #+#             */
/*   Updated: 2020/12/11 17:54:51 by selee            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

static char		*read_word(const char **string, char sep)
{
	char		*result;
	int			len;
	const char	*cursor;

	len = 0;
	cursor = *string;
	while (*cursor != '\0' && *cursor != sep)
	{
		cursor++;
		len += 1;
	}
	result = malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	ft_memcpy(result, *string, len);
	result[len] = '\0';
	*string = cursor;
	return (result);
}

static void		skip_separtors(const char **string, char sep)
{
	const char	*cursor;

	cursor = *string;
	while (*cursor == sep)
		cursor++;
	*string = cursor;
}

static void		cleanup(char **words, int up_to)
{
	int		word_index;

	word_index = 0;
	while (word_index < up_to)
	{
		free(words[word_index]);
		word_index += 1;
	}
	free(words);
}

char			**ft_split(const char *string, char sep)
{
	char		**words;
	int			word_index;
	int			word_count;
	char		*new_word;
	const char	*cursor;

	word_count = count_words(string, sep);
	words = malloc((word_count + 1) * sizeof(char*));
	if (!words)
		return (NULL);
	word_index = 0;
	cursor = &string[0];
	while (word_index < word_count)
	{
		skip_separtors(&cursor, sep);
		if (!(new_word = read_word(&cursor, sep)))
		{
			cleanup(words, word_index);
			return (NULL);
		}
		words[word_index] = new_word;
		word_index++;
	}
	words[word_index] = NULL;
	return (words);
}
