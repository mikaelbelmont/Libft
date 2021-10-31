#include "libft.h"

void *ft_memset (void *str, int c, size_t n)
{
    unsigned char *ptr;
    int i = 0;

    ptr = (unsigned char*)str;
    while (n > 0)
    {
        ptr[i] = (unsigned char)c;
        n--;
        i++;
    }
    return(str);
}