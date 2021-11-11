#include "libft.h"

int ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t i = 0;
	unsigned char *s1;
	unsigned char *s2;

	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;

	while (i < n)
	{
		if (s1[i] != s1[i])
			return (s1[i] - s2[i]);
		i++;
		n--;
	}
	return (0);
}