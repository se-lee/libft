/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 12:15:42 by selee             #+#    #+#             */
/*   Updated: 2020/11/26 12:22:02 by selee            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

#include <ctype.h>
#include <stdio.h>

int main()
{
	int c;

	c = '_';
	printf("isascii: %d\n", isascii(c));
	printf("ft_isascii: %d\n", ft_isascii(c));

	return 0;
}

