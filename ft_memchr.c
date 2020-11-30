/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:22:09 by selee             #+#    #+#             */
/*   Updated: 2020/11/24 15:16:57 by selee            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	char *ptr;

	ptr = (char *)s;
	while (n)
	{
		if (*ptr == (unsigned char)c)
			return (ptr);
		ptr++;
		n--;
	}
	return (NULL);
}


#include        <stdio.h>
#include        <string.h>

int main(void)
{
	/*
	char str[] = "abcdef\0ghij";
	char *p;

	p = memchr(str, 'a', 12);
	printf("検索文字は文字列の%ld番目\n", p - str);
 	*/

	const char str[] = "abc\0def";

    char* p = memchr( str, 'b', sizeof(str) );
    if( p == NULL ){
        puts( "見つからない。" );
    }
    else{
        puts( p );
    }

    const char s[] = "apple banana\0 potato cherry";
   const char ch = 'n';
   char *ret;
   char *out;

   ret = memchr(s, ch, strlen(s));
   out = ft_memchr(s, ch, strlen(s));
   printf("String after |%c| is - |%s|\n", ch, ret);
   printf("String after |%c| is - |%s|\n", ch, out);

	return 0;
}



