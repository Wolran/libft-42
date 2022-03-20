#include "libft.h"

char	*ft_itoa(int n)
{
	int i = n;
	int count = 0;
	char *str;

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