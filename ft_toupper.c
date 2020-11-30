/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 13:01:19 by selee             #+#    #+#             */
/*   Updated: 2020/11/26 13:21:50 by selee            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

#include <ctype.h>
#include <stdio.h>

int	main()
{
	int c;

	c = '9';
	printf("toupper: %c\n", toupper(c));
	printf("ft_toupper: %c\n", ft_toupper(c));

	return 0;
}

