#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*str1;
	const unsigned char	*str2;

	str1 = (unsigned char*)dst;
	str2 = (unsigned char*)src;
	if (src == dst)
		return(0);
	if (str1 < str2)
		while (n--)
			*str1++ = str2++
	else
		while (n--)
			str1[n] = str2[n];
	return (dst);
}