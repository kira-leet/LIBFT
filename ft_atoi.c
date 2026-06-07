
#include "libft.h"

static int	ft_checker(int test)
{
	if (test < 0)
		return (0);
	return (-1);
}

int	ft_atoi(const char *str)
{
	int			i;
	int			signe;
	long		res;
	long		checker;

	i = 0;
	signe = 1;
	res = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		checker = res;
		res = (str[i] - '0') + (res * 10);
		if (res / 10 != checker)
			return (ft_checker(signe));
		i++;
	}
	return (res * signe);
}
