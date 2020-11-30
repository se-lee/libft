/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 17:16:50 by selee             #+#    #+#             */
/*   Updated: 2020/11/24 10:21:42 by selee            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
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
		if (source[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}


/*example*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* msg = "This is the string: not copied";
char* msg2 = "This is the string: not copied";
int main( void )
{
    char buffer[80];
	char buffer2[80];
    memset( buffer, '\0', 80 );
    memccpy( buffer, msg, ':', 80 );	
	ft_memccpy(buffer2, msg2, ':', 80);
    printf( "%s\n", buffer );
    printf("%s\n", buffer2);

    return 0;
}

/*  produces the output:
This is the string:
*/
