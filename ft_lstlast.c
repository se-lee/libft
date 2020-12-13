#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while ((*lst).next != NULL)
		lst = (*lst).next;
	if ((*lst).next == NULL)
		return (lst);
	return (NULL);
}
