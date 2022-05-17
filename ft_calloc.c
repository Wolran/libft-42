/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmuller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 06:46:49 by vmuller           #+#    #+#             */
/*   Updated: 2022/05/13 06:47:00 by vmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t elCount, size_t elSize)
{
	void	*str;

	if (elCount && ((elCount * elSize) / elCount != elCount))
		return (NULL);
	str = (void *)malloc(elCount * elSize);
	if (!str)
		return (NULL);
	ft_bzero(str, elCount * elSize);
	return (str);
}
