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

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tab;
	size_t	total_size;

	total_size = nmemb * size;
	if (nmemb && ((total_size / nmemb) != size))
		return (NULL);
	tab = malloc(total_size);
	if (!tab)
		return (NULL);
	ft_bzero(tab, total_size);
	return (tab);
}