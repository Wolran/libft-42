#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t			i;

	i = 0;
	if (!src && !dest)
		return (NULL);
	if (dest < src)
	{
		while (i < len)
		{
			ft_memcpy(dest, src, len);
			break ;
		}
	}
	else
	{
		while (len-- > 0)
		{
			dest[len] = src[len];
		}
	}
	return (dest);
}