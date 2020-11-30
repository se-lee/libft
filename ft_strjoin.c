/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selee <selee@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 11:37:26 by seoyounglee       #+#    #+#             */
/*   Updated: 2020/11/30 16:02:15 by selee            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	i;
	size_t	len;
	size_t	len2;

	i = 0;
	len = ft_strlen((char *)s1);
	len2 = ft_strlen((char *)s2);
	if (!(ptr = (char *)malloc((sizeof(char) * (len + len2)))))
		return (NULL);
	while (s1)
	{
		ptr[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2)
	{
		ptr[len] = s2[i];
		len++;
		i++;
	}
	ptr[len] = '\0';
	return (ptr);
}
