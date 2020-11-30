/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 15:57:44 by selee             #+#    #+#             */
/*   Updated: 2020/11/23 16:27:57 by selee            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char *str;

	i = 0;
	str = s;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}



//example - how do we test??

#include <stdio.h>
#include <string.h>

int	main()
{
  char str[] = "almost every programmer should know memset!";
  char str1[] = "almost every programmer should know memset!";
  bzero(str, 6);
  puts (str);
  ft_bzero(str1, 6);
  puts(str1);
  return 0;
// Output:
// ------ every programmer should know memset!
}
