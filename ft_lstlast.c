/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selee <selee@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 13:23:31 by selee             #+#    #+#             */
/*   Updated: 2020/12/11 18:48:51 by selee            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst != 0)
	{
		while ((*lst).next != NULL)
			lst = (*lst).next;
		if ((*lst).next == NULL)
			return (lst);
	}
	return (NULL);
}
