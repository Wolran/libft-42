/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmuller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 06:29:31 by vmuller           #+#    #+#             */
/*   Updated: 2022/05/13 06:29:32 by vmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
