
#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t					i;
	unsigned const char		*s;
	unsigned char			uc;

	s = (unsigned const char *)str;
	uc = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (s[i] == uc)
			return ((unsigned char *)&s[i]);
		i++;
	}
	return (NULL);
}
