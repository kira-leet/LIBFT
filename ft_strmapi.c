
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char					*str;
	unsigned int			i;
	unsigned int			slen;

	if (!s || !f)
		return (NULL);
	slen = ft_strlen(s);
	str = malloc((slen + 1) * (sizeof (char)));
	if (!str)
		return (NULL);
	i = 0;
	while (i < slen)
	{
		str[i] = (f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
