#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char *str1;
    unsigned const char str2*;

    str1 = (unsigned char*)dst;
    str2 = (unsigned char*)src;
    while (n-- > 0)
        *(str1++) = *(str2++);
    return(dst);
}