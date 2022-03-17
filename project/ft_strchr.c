#include "libft.h"

char	*ft_strchr(const char *str, int y)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (char)y)
		{
			return ((char *)&str[i]);
		}
		i++;
	}
	if (!y)
		return ((char *)&str[i]);
	return (NULL);
}
