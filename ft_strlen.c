/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 11:30:42 by selee             #+#    #+#             */
/*   Updated: 2020/11/25 11:40:06 by selee            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

#include <stdio.h>
#include <string.h>

int	main()
{
	char str[] = "";
	int	strl;
	int ft_strl;

	strl = strlen(str);
	ft_strl = ft_strlen(str);
	printf("strlen: %d\n", strl);
	printf("ft_strlen: %d\n", ft_strl);

	return 0;
}

