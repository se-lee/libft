/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoyounglee <seoyounglee@student.42lyon    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 19:55:31 by seoyounglee       #+#    #+#             */
/*   Updated: 2020/12/02 22:34:15 by seoyounglee      ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//libft.h 

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (fd > 0)
	{
		while (s[i])
		{
			write(fd, &s[i], 1);
			i++;
		}
	}
}

int	main()
{
	char s[] = "Hello Joojin";
	ft_putstr_fd(s, 1);
	return 0;
}
