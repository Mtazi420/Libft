#include "libft.h"
#include <string.h>

size_t ft_strlen(const char *str)
{
    size_t i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return i;
}
void *ft_memmove(void *dst, const void *src, size_t n)
{
    char *ptr;
    char *ptr2;

    ptr = (char *)dst;
    ptr2 = (char *)src;

    if (n == 0)
        return (ptr);
    
    if (dst <= src)
        return (ft_memcpy(ptr, ptr2, n));
    while (n)
    {
        ptr[n] = ptr2[n];
        n--;
    }
    return (ptr);
}
