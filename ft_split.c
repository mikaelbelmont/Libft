#include "libft.h"

static int count_cols(const char *s, char c, int i)
{
	int	n = 0;

	while (s[i] != c && s[i] != '\0')
	{
		i++;
		n++;
	}
	return (n);
}

static char **clean_matriz(char const **dst, int j)
{
	while (j > 0)
	{
		j--;
		free((void *)dst[j]);
	}
	free(dst);
	return (NULL);
}

static char **create_matriz(const char *s, char **dst, char c, int l)
{
	int	i = 0;
	int	j = 0;
	int	k = 0;;

	while (s[i] != '\0' && j < l)
	{
		while (s[i] == c)
			i++;
		dst[j] = (char *)malloc(sizeof(char) * count_cols(s, c, i) + 1);
		if (dst[j] == NULL)
			return (clean_matriz((char const **)dst, j));
		while (s[i] != '\0' && s[i] != c)
			dst[j][k++] = s[i++];
		dst[j][k] = '\0';
		j++;
	}
	dst[j] = 0;
	return (dst);
}

int ft_countwords(const char *s, char c)
{
	int i = 0;
	int j = 0;
	int f = 0;

	while (s[i])
	{
		if (s[i] == c)
			f = 0;
		else if (f == 0)
		{
			f = 1;
			j++;
		}
		i++;
	}
	return (j);
}

char **ft_split(char const *s, char c)
{
	int l;
	char **dst;

	if (s == NULL)
		return (NULL);
	l = ft_countwords(s, c);
	dst = (char **)malloc(sizeof(char *) * (l + 1));
	if (dst == NULL)
		return (NULL);
	return (create_matriz(s, dst, c, l));
}