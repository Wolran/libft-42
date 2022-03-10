#include "libft.h"

void	*memcpy(void * dest, const void * source, size_t size)
{
	int i;
	
	i = 0;
	while(i < size)
	{
		((char *)dest)[i] = ((char *)source)[i];
		i++;
	}
	return (dest);
}