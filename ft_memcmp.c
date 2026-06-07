
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t					i;
	unsigned const char		*d1;
	unsigned const char		*d2;

	d1 = (unsigned const char *)s1;
	d2 = (unsigned const char *)s2;
	i = 0;
	while (i < n)
	{
		if (d1[i] != d2[i])
		{
			return (d1[i] - d2[i]);
		}
		i++;
	}
	return (0);
}
