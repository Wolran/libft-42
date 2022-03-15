#include "libft.h"

static int ft_nbset(char const *str, char const *set)
{
	int i;
	int count;
	int j;
	
	count = 0;
	i = 0;
	while (set[i])
	{
		j = 0;
		while (str[j])
		{
			if (str[j] == set[i])
				count++;
			j++;
		}
		i++;
	}
	return (count);
}

static char *ft_strcpym(char *dest, const char *s1, const char set)
{
	int	i;
	int	j;
	int	h;
	int	flag;

	i = 0;
	h = 0;
	while (s1[i])
	{
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
				flag = 1;
			j++;
		}
		if (flag == 0)
			dest[h++] = s1[i];
		flag = 0;
		i++;
	}
	dest[h] = 0;
	return (dest);
}

char *ft_strtrim(char const *s1, char const *set)
{
	int		len;
	char	*str;

	len = (ft_strlen(s1) - ft_nbset(s1, set));
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	ft_strcpym(str, s1, set);
	return (str);
}