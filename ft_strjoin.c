/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoyounglee <seoyounglee@student.42lyon    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 11:37:26 by seoyounglee       #+#    #+#             */
/*   Updated: 2020/12/02 22:34:13 by seoyounglee      ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	size_t	i;
	size_t	total_len;

	total_len = (ft_strlen((char *)s1)) + (ft_strlen((char *)s2)) + 1;
	dest = (char *)malloc(sizeof(char) * total_len);
	if (!dest)
		return (NULL);
	i = 0;
	total_len = 0;
	while (s1[i])
		dest[total_len++] = s1[i++];
	i = 0;
	while (s2[i])
		dest[total_len++] = s2[i++];
	dest[total_len] = '\0';
	return (dest);
}
