
#include "libft.h"

static	int	count(long nbr)
{
	int	count;

	count = 0;
	if (nbr < 0)
	{
		count++;
		nbr = -nbr;
	}
	if (nbr == 0)
		return (1);
	while (nbr > 0)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int				i;
	char			*result;
	long int		nbr;
	int				count_n;

	nbr = n;
	count_n = count(nbr);
	result = malloc((count_n + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result[count_n] = '\0';
	i = count_n - 1;
	if (nbr == 0)
		result[0] = '0';
	if (nbr < 0)
	{
		result[0] = '-';
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		result[i--] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (result);
}
