/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selee <selee@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 16:13:40 by selee             #+#    #+#             */
/*   Updated: 2020/12/01 17:02:26 by selee            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		i;
	int		sign;
	char	*str;
	int		len;

	i = 0;
	sign = 1;
	while (n && (n >= 0 && n <= 9))
	{
		str[i] = n % 10 + '0';
		i++;
	}
	return (*str);
}
