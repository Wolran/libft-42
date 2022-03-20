#include "libft.h"

int	ft_memcmp(const void *str, const void *str2, size_t n)
{
	size_t			i;

	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
		{
			return (str1[i] - str2[i]);
		}
		i++;
	}
	return (0);
}