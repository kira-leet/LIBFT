
#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int			i;
	char		uc;

	uc = (char)c;
	i = 0;
	while (str[i])
	{
		if (str[i] == uc)
			return ((char *)&str[i]);
		i++;
	}
	if (uc == '\0')
		return ((char *)&str[i]);
	return (NULL);
}
