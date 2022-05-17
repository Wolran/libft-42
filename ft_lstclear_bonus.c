/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmuller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 06:44:09 by vmuller           #+#    #+#             */
/*   Updated: 2022/05/13 06:44:27 by vmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*test;
	t_list	*new;

	test = *lst;
	while (test)
	{
		new = test->next;
		ft_lstdelone(test, (*del));
		test = new;
	}
	*lst = 0;
}
