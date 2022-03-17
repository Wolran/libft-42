#include "libft.h"

void	*ft_calloc(size_t elementCount, size_t elementSize)
{
	void	*str;

	str = (void *)malloc(elementCount * elementSize);
	if (str == 0)
		return (0);
	ft_memset(str, 0, elementCount * elementSize);
	return (str);
}
