/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmuller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 06:25:26 by vmuller           #+#    #+#             */
/*   Updated: 2022/05/13 06:25:28 by vmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		j;

	str = NULL;
	if (!set && s1)
		str = ft_strdup(s1);
	else if (s1)
	{
		i = 0;
		j = ft_strlen(s1);
		if (j)
			j--;
		while (s1[i] && ft_strchr(set, s1[i]))
			i++;
		while (j >= 0 && ft_strchr(set, s1[j]))
			j--;
		str = ft_substr(s1, i, (j - i + 1));
	}
	return (str);
}
