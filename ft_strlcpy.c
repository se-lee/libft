/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 11:41:01 by selee             #+#    #+#             */
/*   Updated: 2020/11/25 15:05:52 by selee            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t destsize)
{
	size_t	i;

	i = 0;
	while (src[i])	
		i++;
	while (src[i] && i + 1 < destsize)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (i);
}

/*
	unsigned int	i;
	unsigned int	j;
	unsigned int	len_dest;
	unsigned int	len_src;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	i = 0;
	j = 0;
	if (size == 0 || size < len_dest)
		return (size + len_src);
	while (dest[i] && i < size)
		i++;
	while (src[j] && i + j + 1 < size)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (len_dest + len_src);
*/
	
int	main()
{
	char dst[] = "123456";
	char src[] = "1234567";

	printf("%lu\n", strlcpy(dst, src, sizeof(dst)));
	printf("%lu\n", ft_strlcpy(dst, src, sizeof(dst)));

	return 0;

}
