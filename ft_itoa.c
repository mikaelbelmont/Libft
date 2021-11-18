#include "libft.h"

int	numlen(int n)
{
	int	l = 1;

	while (n > 9)
	{
		n = n / 10;
		l++;
	}
	return (l);
}

char *ft_itoa(int n)
{
	char *str;
	int s = 0;
	int n;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		n = n * -1;
		s = 1;
	}
	n = numlen(n);
	str = (char *)malloc(sizeof(char ) * (n + s + 1));
	if (!str)
		return (NULL);
	str[n + s] = '\0';
	while (n-- > 0)
	{
		str[n + s] = 48 + n % 10;
		n = n / 10;
	}
	if (s == 1)
		str[n + s] = '-';
	return (str);
}