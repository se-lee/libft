/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selee <selee@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 16:07:40 by selee             #+#    #+#             */
/*   Updated: 2020/11/30 16:03:37 by selee            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;

	i = 0;
	if (!(ptr = (char *)malloc(sizeof(char) * len)))
		return (NULL);
	while ((char *)s[i])
	{
		i++;
		if (i == start) //add 'len' condition here;
			ptr[i] = s[i];
	}
	return (*ptr);
}
