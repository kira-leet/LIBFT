
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_size;
	void	*ptr;

	if (count && SIZE_MAX / count < size)
		return (NULL);
	total_size = count * size;
	ptr = malloc (total_size);
	if (!ptr)
		return (NULL);
	ft_bzero (ptr, total_size);
	return (ptr);
}
