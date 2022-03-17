#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*liste;
	t_list	*new;

	new = 0;
	while (lst)
	{
		liste = ft_lstnew((*f)(lst->content));
		if (!liste)
		{
			ft_lstclear(&new, (*del));
			return (NULL);
		}
		ft_lstadd_back(&new, liste);
		lst = lst->next;
		liste = liste->next;
	}
	return (new);
}
