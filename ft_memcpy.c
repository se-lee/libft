/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 16:36:35 by selee             #+#    #+#             */
/*   Updated: 2020/11/23 17:10:58 by selee            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char *dest;
	char *source;
	size_t i;

	dest = (char *)dst;
	source = (char *)src;
	i = 0;
	while (i < n)
	{
		dest[i] = source[i];
		i++;
	}
	return (dst);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char buf[] = "ABCDDEFG";
    char buf2[] = "123456789";
    
	char buf3[] = "ABCDDEFG";
    char buf4[] = "123456789";
    //3バイトだけコピー
    memcpy(buf,buf2,3);
    //表示
    printf("コピー後のbuf文字列→%s\n",buf);
 	ft_memcpy(buf3, buf4, 4);
	printf("ft_memcpy -> %s\n", buf3);
 	return 0;
}

