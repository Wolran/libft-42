#include "libft.h"

void	*memcpy(void *dest, const void *src, size_t n)
{
	int i;
	
	i = 0;
	if (!n || src == dest)
		return (dest);
	while(i < n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}