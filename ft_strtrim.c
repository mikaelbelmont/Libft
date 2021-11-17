#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    size_t i = 0;
    size_t n;

    if (!s1 || !set)
        return (NULL);
    while (s1[i] && ft_strchr(set, s1[i]) != 0)
        i++;
    n = ft_strlen(&s1[i]);
    if (n != 0)
        while (s1[i + n - 1] && ft_strchr(set, s1[i + n - 1]) != 0)
            n--;
    return (ft_substr(s1, i, len));
}