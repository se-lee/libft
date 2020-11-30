/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 10:27:16 by selee             #+#    #+#             */
/*   Updated: 2020/11/24 14:18:39 by selee            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *dest;
	char *source;
	size_t i;

	dest = (char *)dst;
	source = (char *)src;
	i = 0;
	
	if (src > dst)
	{
		i = len;
		while (i > 0)
		{
			dest[i] = source[i];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			dest[i] = source[i];
			i++;
		}
	}
	return (dst);
}


#include <stdio.h>
#include <string.h>

int main()
{
    char str[100] = "Learningisfun";
    char *first, *second;
    first = str;
    second = str;
    printf("Original string :%s\n ", str);

    // when overlap happens then it just ignore it
    memcpy(first + 8, first, 10);
    printf("memcpy overlap : %s\n ", str);

    // when overlap it start from first position
    memmove(second + 8, first, 10);
    printf("memmove overlap : %s\n ", str);

	char str2[] = "abcdefghijklmnopqrstu";
	printf("移動前：%s\n", str2);
	memmove(str2 + 5, str2, 10);        /* 重複エリアのコピー */
	printf(" 移動後：%s\n", str2);

	char str3[] = "abcdefghijklmnopqrstu";
	printf("before: %s\n", str3);
	ft_memmove(str3 + 5, str3, 10);
	printf("ft_mov: %s\n", str3);
    return 0;
}
/*Output
 Original string :Learningisfun
 memcpy overlap : LearningLearningis
 memmove overlap : LearningLearningLe
*/
