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