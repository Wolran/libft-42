#include "libft.h"

void	*ft_memmove(void *dest, void const *src, size_t len)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)dest;
	str2 = (unsigned char *)src;
	i = 0;
	if (str2 < str1)
		while (++i <= len)
			*(str1 + len - i) = *(str2 + len - i);
	else
		while (len-- > 0)
			*(str1++) = *(str2++);
	return (dest);
}
