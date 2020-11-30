/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selee <selee@student.42lyon.fr> 		    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 19:55:31 by seoyounglee       #+#    #+#             */
/*   Updated: 2020/11/27 20:01:00 by seoyounglee      ###   ########lyon.fr   */
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

/*
Function name ft_putstr_fd
Prototype void ft_putstr_fd(char *s, int fd);
Turn in files -
Parameters #1. The string to output.
#2. The file descriptor on which to write.
Return value None
External functs. write
Description Outputs the string ’s’ to the given file
descriptor.
*/