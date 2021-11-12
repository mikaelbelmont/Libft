#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t n)
{
	size_t i;
	unsigned char		*str1;
	const unsigned char	*str2;

	str1 = (unsigned char*)dst;
	str2 = (unsigned char*)src;
	if (str1 <= str2)
	{
		for (i = 0; i < n; i++)
			str1[i] = str2[i];
	}
	else
	{
		for (i = n; i > 0; i--)
			str1[i - 1] = str2[i - 1];
	}
	return (dst);
}