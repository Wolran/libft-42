#include "libft.h"

void *memccpy(void *dest, const void *src, int c, size_t n)
{
	int i;
	
	i = 0;
	while(i < n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
		if (((char *)src)[i] == (char)c)
			return (dest[i + 1]);
	}
	return (0);
}