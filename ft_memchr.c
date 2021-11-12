#include "libft.h"

void *ft_memchr(const void *str, int c, size_t n)
{
	size_t i = 0;
	char *s;

	s = (void *)str;

	while (i < n)
	{
		if (s[i] == (char)c)
			return (&s[i]);
		i++;
	}
	return (NULL);
}