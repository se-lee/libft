/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 16:37:42 by selee             #+#    #+#             */
/*   Updated: 2020/11/25 17:18:09 by selee            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *ptr;
	size_t	i;

	ptr = (char *)s;
	i = 0;
	while (s[i])
		i++; //length
	if (c == '\0')
		return (ptr + i);	
	while (i > 0)
	{
		i--;
		if (ptr[i] == (unsigned char)c)
			return (ptr + i);
	}
	return (NULL);
}

/*

char *ft_strchr(const char *s, int c)
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
*/

#include <string.h>
#include <stdio.h>

int main(void)
{
   const char str2[] = "This is just a String";
   char ch;
   char *p2;
   char *p3;

   ch = 'S';
   p2 = strrchr(str2, ch);
   p3 = ft_strrchr(str2, ch);
   printf("strchr: %s\n", p2);
   printf("ft_strrchr: %s\n", p3);
   return 0;
}

