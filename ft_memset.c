#include "libft.h"
void *ft_memset(void *str, int c, size_t n)
{
    unsigned char *ptr;
    int i;
    unsigned int cd;

    cd = (unsigned int)c;
    ptr = (unsigned char *)str;
    i = 0;
    while (i < n)
    {
        ptr[i] = cd;
        i++;
    }
    return (ptr);
}
