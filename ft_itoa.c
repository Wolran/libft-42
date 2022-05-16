/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmuller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 06:45:26 by vmuller           #+#    #+#             */
/*   Updated: 2022/05/13 06:46:02 by vmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_balek25(char *str, long i, long count)
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
	long	i;
	long	count;
	char	*str;

	i = n;
	count = 0;
	if (i < 0)
	{
		count++;
		i = i * -1;
	}
	if (i == 0)
		count++;
	while (i != 0)
	{
		i = i / 10;
		count++;
	}
	str = malloc(sizeof(char) * (count + 1));
	if (!str)
		return (0);
	i = n;
	str[count] = 0;
	ft_balek25(str, i, count);
	return (str);
}
/*
#include <stdio.h>
int main()
{
	char *str = ft_itoa(30);
	printf("%s", str);
}
*/
