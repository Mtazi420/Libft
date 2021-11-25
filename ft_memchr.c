#include "libft.h"
void *ft_memchr(const void *str, int c, size_t n)
{
    char *ptr = NULL;
    ptr = (char *)str;
    size_t i = 0;
    while (i < n)
    {
        if (ptr[i] == c)
        {
            ptr = &ptr[i];
            return ptr;
        }

        i++;
    }
    return NULL;
}
