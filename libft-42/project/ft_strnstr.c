#include "libft.h"

char	*ft_strnstr(const char *str, const char *str2, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*str2 == 0)
		return ((char *)str);
	while (str[i] && i < len)
	{
		j = 0;
		while (str[i + j] && str2[j]
			&& i + j < len && str[i + j] == str2[j])
		j++;
		if (j == ft_strlen(str2))
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}