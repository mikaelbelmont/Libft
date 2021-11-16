#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t n)
{
	size_t i = 0;
	size_t j = 0;
	char *str;

	str = (char*)malloc(sizeof(*s) * (len + 1));
	if (!str)
		return (NULL);
	while (s[i])
	{
		if (i >= start && j < n)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = 0;
	return (str);
}