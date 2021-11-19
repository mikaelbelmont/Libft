include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void *))
{
	t_list	*f = 0;
	t_list	*n;

	if (!f || !del)
		return (0);
	while (lst)
	{
		if (!(n = ft_lstnew((*f)(lst->content))))
		{
			while (f)
			{
				n = f->next;
				(*del)(f->content);
				free(f);
				f = n;
			}
			lst = 0;
			return (0);
		}
		ft_lstadd_back(&f, n);
		lst = lst->next;
	}
	return (f);
}