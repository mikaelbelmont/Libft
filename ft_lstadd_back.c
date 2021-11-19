#include "libft.h"

void ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*end;

	if (!*alst)
	{
		*alst = new;
		return ;
	}
	end = ft_lstlast(*alst);
	end->next = new;
}