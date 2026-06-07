
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	uc;

	uc = (char)c;
	len = ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == uc)
			return ((char *)&s[len]);
		len--;
	}
	return (NULL);
}
