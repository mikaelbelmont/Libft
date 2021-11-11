#include "libft.h"

int ft_atoi(const char *str)
{
    int i = 0;
    int n = 0;
    int neg = 1;

    while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            neg *= -1;
        i++;
    }
    while (str[i] >= 48 && str[i] <= 57)
    {
        n = n * 10 + (str[i] - 48);
        i++;
    }
    return (n * neg);
}