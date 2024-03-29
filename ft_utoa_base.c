#include "libft.h"

static unsigned int	ft_len_nbr(long unsigned int n, unsigned int base_len)
{
	unsigned int		i;
	long unsigned int	nbr;

	nbr = (long unsigned)n;
	i = 1;
	while (nbr >= base_len)
	{
		nbr /= base_len;
		i++;
	}
	return (i);
}

char	*ft_utoa_base(unsigned long int n, const char *base)
{
	int					i;
	char				*str;
	int					len;
	long unsigned int	nbr;
	unsigned int		base_len;

	nbr = (long unsigned)n;
	base_len = ft_strlen(base);
	len = ft_len_nbr(n, base_len);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	i = len - 1;
	while (nbr >= base_len)
	{
		str[i] = base[nbr % base_len];
		nbr /= base_len;
		i--;
	}
	str[i] = base[nbr % base_len];
	return (str);
}
