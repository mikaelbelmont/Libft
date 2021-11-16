#include "libft.h"

char *ft_strdup(const char *str)
{
    int i = 0;
    char *cpy;

    cpy = (char *)malloc((ft_strlen(str) + 1) * sizeof(char));
    if (cpy == 0)
        return (0);
    while (str[i])
    {
        cpy[i] = str[i];
        i++;
    }
    cpy[i] = '\0';
    return (cpy);
}