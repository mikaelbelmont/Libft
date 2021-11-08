#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i = 0;
	size_t	j = 0;

	while (dst[i])
		i++;
	if (n < i)
	{
		while (src[j])
			j++;
		return (n + j);
	}
	while (n > 0 && i < n - 1 && src[j])
		dst[i++] = src[j++];
	dst[i] = '\0';
	while (src[j++])
		i++;
	return (i);
}