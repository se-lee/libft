/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 12:23:29 by selee             #+#    #+#             */
/*   Updated: 2020/11/26 12:59:17 by selee            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

#include <stdio.h>
#include <ctype.h>

int	main()
{
	int c;

	c = '\n';
	printf("isprint: %d\n", isprint(c));
	printf("ft_isprint: %d\n", ft_isprint(c));

	return 0;
}


