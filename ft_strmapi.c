/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoyounglee <seoyounglee@student.42lyon    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 10:02:15 by seoyounglee       #+#    #+#             */
/*   Updated: 2020/12/02 10:15:41 by seoyounglee      ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{


}

/*
Parameters 
#1. The string on which to iterate (=repeat).
#2. The function to apply to each character.
Return value The string created from the successive applications of ’f’. Returns NULL if the allocation fails.

External functs. malloc

Description 
Applies the function ’f’ to each character of the string ’s’ to create a new string (with malloc(3))
resulting from successive applications of ’f’.
*/