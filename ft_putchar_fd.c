/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selee <selee@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 18:46:28 by seoyounglee       #+#    #+#             */
/*   Updated: 2020/11/30 15:23:46 by selee            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}


/*
ft_putchar_fd
Prototype void ft_putchar_fd(char c, int fd);
Parameters #1. The character to output.
			#2. The file descriptor on which to write.
Return value None
External functs. write
Description Outputs the character ’c’ to the given file descriptor.
*/