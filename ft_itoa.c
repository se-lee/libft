/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selee <selee@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 16:13:40 by selee             #+#    #+#             */
/*   Updated: 2020/12/08 16:46:46 by selee            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_len_nbr(int n)
{
	unsigned int	i;
	long long int	nbr;

	nbr = (long long int)n;
	i = 1;
	if (nbr < 0)
	{
		nbr *= -1;
		i++;
	}
	while (nbr > 9)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

char			*ft_itoa(int n)
{
	int				i;
	char			*str;
	int				len;
	long long int	nbr;

	nbr = (long long int)n;
	len = ft_len_nbr(n);
	if (!(str = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	str[len] = '\0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr *= -1;
	}
	i = len - 1;
	while (nbr >= 10)
	{
		str[i] = nbr % 10 + '0';
		nbr /= 10;
		i--;
	}
	str[i] = nbr % 10 + '0';
	return (str);
}
