#include "libft.h"

int ft_strlen(const char *str)
{
	int c = 0;

	while (str[c] != '\0')
		c++;
	return (c);
}