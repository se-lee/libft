/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 13:22:54 by selee             #+#    #+#             */
/*   Updated: 2020/11/26 13:29:08 by selee            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

#include <stdio.h>
#include <ctype.h>

int	main()
{
	int c;

	c = '0';
	printf("tolower: %c\n", tolower(c));
	printf("ft_tolower: %c\n", ft_tolower(c));

	return 0;

}
