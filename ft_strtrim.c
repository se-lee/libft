/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selee <selee@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 13:53:31 by selee             #+#    #+#             */
/*   Updated: 2020/12/07 16:56:19 by selee            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	if (!set || !c)
		return (0);
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	len;
	size_t	j;

	i = 0;
	j = 0;
	len = ft_strlen(s1);
	if (!s1 || !set)
		return (0);
	while (s1 && ft_is_in_set(s1[i], set))
		i++;
	while (s1 && ft_is_in_set(s1[len - 1], set))
		len--;
	if (i >= len)
		return ("");
	if (!(str = (char *)malloc(sizeof(char) * (len - i + 1))))
		return (NULL);
	while (i < len)
		str[j++] = s1[i++];
	str[j] = '\0';
	return (str);
}
