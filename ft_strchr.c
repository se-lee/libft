/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selee <selee@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 15:53:11 by selee             #+#    #+#             */
/*   Updated: 2020/11/30 16:00:48 by selee            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	char *ptr;

	ptr = (char *)s;
	while (ptr)
	{
		if (*ptr == (unsigned char)c)
			return (ptr);
		ptr++;
	}
	return (NULL);
}

int		main(void)
{
	const char	str2[] = "This is just a String";
	const char	ch = 'u';
	char		*p2;
	char		*p3;

	p2 = strchr(str2, ch);
	p3 = ft_strchr(str2, ch);
	printf("strchr: %s\n", p2);
	printf("ft_strchr: %s\n", p3);
	return (0);
}
