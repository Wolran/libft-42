#include "libft.h"

static char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(const char *src)
{
	int		count;
	char	*srcop;

	count = ft_strlen(src);
	srcop = (char *) malloc(count);
	if (!srcop)
		return (0);
	srcop = ft_strcpy(srcop, src);
	return (srcop);
}
