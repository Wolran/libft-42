#include "libft.h"

static char	*ft_strncpy(char *dest, char *src, int n)
{
	int	i;

	i = 0;
	while ((i < n) && (src[i]))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}


static int ft_countw(char *s, char c)
{
	int i;
	int count;

	count = 0;
	i = 1;
	if (s[0] != c)
		count++;
	while (s[i])
	{
		if (s[i - 1] == c && s[i] != c)
			count++;
		i++;
	}
	return (count);
}

static int ft_tmot(char *str, int index, char c)
{
	int i = 0;
	while (str[index + i])
	{
		if (str[index + i] == c)
			return (i);
		i++;
	}
	return (i);
}

char	**ft_split(const char *s, char c)
{
	int		i;
	int		j;
	int		tmot;
	char	**tab;

	j = 0;
	i = 0;
	if (!s)
		return (0);
	tab = (char **)malloc(sizeof(char*) * (ft_countw(s, c) + 1));
	if (!tab)
		return (0);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] == 0)
			break;
		tmot = ft_tmot(s, i, c);
		tab[j] = (char *)malloc(sizeof(char) * (tmot + 1));
		tab[j] = ft_strncpy(tab[j++], s + i, tmot);
		i += tmot;
	}
	tab[j] = 0;
	return (tab);
}
