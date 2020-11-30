/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 11:31:55 by selee             #+#    #+#             */
/*   Updated: 2020/11/23 15:57:04 by selee            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*ptr;

	ptr = (char*)b;
	while (len > 0)
	{
		*ptr  = (char)c;
		ptr++;
		len--;
	}
	return (b);
}


/* memset example*/

#include <stdio.h>
#include <string.h>

int	main()
{
  char str[] = "almost every programmer should know memset!";
  char str1[] = "almost every programmer should know memset!";
  memset (str,'-',6);
  puts (str);
  ft_memset(str1, '*', 10);
  puts(str1);
  return 0;
}
// Output:
// ------ every programmer should know memset!
