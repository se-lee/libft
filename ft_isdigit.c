/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 11:59:50 by selee             #+#    #+#             */
/*   Updated: 2020/11/26 12:03:43 by selee            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}


#include <stdio.h>
#include <ctype.h>

int	main()
{
	int	c;

	c = 1;
	printf("isdigit: %d\n", isdigit(c));
	printf("ft_isdigit: %d\n", ft_isdigit(c));

	return 0;

}

