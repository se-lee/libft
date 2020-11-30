/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 15:18:46 by selee             #+#    #+#             */
/*   Updated: 2020/11/25 11:30:09 by selee            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	unsigned char *s_1;
	unsigned char *s_2;

	i = 0;
	s_1 = (unsigned char *)s1;
	s_2 = (unsigned char *)s2;
	
	if (s1 == s2 || n == 0)
		return (0);
	while (i < n)
	{
		if (s_1[i] != s_2[i])
			return (s_1[i] - s_2[i]);
		i++;
	}
	return (0);	
}

#include        <stdio.h>
#include        <string.h>

int main(void)
{
	char buf1[] = "\0abc\0de";      /* 途中に空文字のある文字列 */
	char buf2[] = "\0abc\0de";
	char buf3[] = "\0abcdef";
        
	if (memcmp(buf1, buf2, 7) == 0)
		printf("buf1 = buf2\n");
	else
		printf("buf1 != buf2\n");

	if (memcmp(buf1, buf3, 7) == 0)
		printf("buf1 = buf3\n");
	else
		printf("buf1 != buf3\n");
	
	char str1[] = "abc\0defgh\0ijk";
	char str2[] = "abc\0defgh\0ijl";
	int ret;
	int ret2;

	ret = memcmp(( void * )str1 , ( void * )str2 , 11 );
	ret2 = ft_memcmp((void *)str1, (void *)str2, 11);
	printf( "\nret=%d\n" , ret );
	printf( "ret2=%d\n" , ret2 );
	
	ret = memcmp(( void * )str2 , ( void * )str1, sizeof( str1 ));
	printf( "\nret=%d\n" , ret ); 
	ret2 = ft_memcmp(( void * )str2 , ( void * )str1, sizeof( str1 ));
	printf( "ret2=%d\n" , ret2 ); 

	ret = memcmp(( void * )str1 , ( void * )str2, sizeof( str1 ));
	printf( "\nret=%d\n" , ret );
	ret2 = ft_memcmp(( void * )str1 , ( void * )str2, sizeof( str1 ));
	printf( "ret2=%d" , ret2 );
		
	return 0;
}


/*results
buf1 = buf2
buf1 != buf3
*/
