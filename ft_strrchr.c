/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmuller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 06:25:52 by vmuller           #+#    #+#             */
/*   Updated: 2022/05/13 06:25:54 by vmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int y)
{
	size_t	i;

	if (!str)
		return (NULL);
	i = ft_strlen(str);
	while (i > 0)
	{
		if (str[i] == (char)y)
			return ((char *)&str[i]);
		i--;
	}
	if (str[0] == (char)y)
		return ((char *)&str[0]);
	return (NULL);
}
