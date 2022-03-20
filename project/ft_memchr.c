#include "libft.h"

void	*ft_memchr(const void *str, int y, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (str[i] == (char)y)
			return (&str[i]);
		i++;
	}
	return (NULL);
}