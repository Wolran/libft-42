/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmuller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 05:15:19 by vmuller           #+#    #+#             */
/*   Updated: 2022/02/08 05:15:23 by vmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

unsigned int	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;

	i = -1;
	while (++i < size && *dest)
	{
		dest++;
	}
	if (i == size)
		return (i + ft_strlen(src));
	j = -1;
	while (src[++j])
		if (j < size - i - 1)
			*dest++ = src[j];
	*dest = '\0';
	return (i + j);
}
