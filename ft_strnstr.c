#include "libft.b"

char *ft_strnstr(const char *str1, const char *str2, size_t n)
{
	size_t i = 0;
	size_t j = 0;

	if (str2 == NULL || *str2 == '\0')
		return ((char *)str1);
	while (str1[i] && i < n)
	{
		if (str1[i] == str[j])
		{
			while (str1[i + j] == str2[j] && (j + i) < n)
			{
				if (str2[j + 1] == '\0')
					return ((char *)&str1[i]);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}