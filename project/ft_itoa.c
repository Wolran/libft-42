#include "libft.h"

static char	*ft_balek25(char *str, int i, int count)
{
	while (count > 0 && str[count - 1] != '-')
	{
		if (i < 0)
		{
			str[0] = '-';
			i = i * -1;
		}
		else
		{
			count--;
			str[count] = ((i % 10) + '0');
			i /= 10;
		}
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		i;
	int		count;
	char	*str;

	i = n;
	count = 0;
	if (i < 0)
	{
		count++;
		i = i * -1;
	}
	while (i != 0)
	{
		i = i / 10;
		count++;
	}
	str = malloc(sizeof(char) * (count + 1));
	i = n;
	str[count] = 0;
	ft_balek25(str, i, count);
	return (str);
}
