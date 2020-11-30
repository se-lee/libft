/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 11:22:31 by selee             #+#    #+#             */
/*   Updated: 2020/11/26 11:58:41 by selee            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a'  && c <= 'z'))
		return (1);
	return (0);
}

#include <stdio.h>
#include <ctype.h>

int	main()
{
	int	c;
	c = '!';
	printf("isalpha: %d\n", isalpha(c));
	printf("ft_isalpha: %d\n", ft_isalpha(c));

	return 0;

}
