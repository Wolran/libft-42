#include "libft.h"

void	*ft_memset(void *s, int i, size_t len)
{
	char	*p;

	p = (char *)s;
	while (len > 0)
	{
		p[len - 1] = i;
		len--;
	}
	return (s);
}
