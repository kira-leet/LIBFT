
#include "libft.h"	

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*data;

	data = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		data[i] = c;
		i++;
	}
	return ((unsigned char *)str);
}
