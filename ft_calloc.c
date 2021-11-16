#include "libft.h"

void *ft_calloc(size_t c, size_t n)
{
	char *ptr;
	size_t i = 0;

	ptr = (void*)malloc(c * n);
	if (ptr == 0)
		return (0);
	while (i < c *n)
	{
		ptr[i] = 0;
		i++;
	}
	return ((void *)ptr);
}