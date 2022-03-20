#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*str;
	int		taille;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	taille = (ft_strlen(s1) + ft_strlen(s2) + 1);
	str = malloc(sizeof(char) * taille);
	if (!str)
		return (NULL);
	while (s1[i])
		str[j++] = s1[i++];
	i = 0;
	while (s2[i])
		str[j++] = s2[i++];
	str[j] = 0;
	return (str);
}