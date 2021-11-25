#include "libft.h"
char *ft_strncat(char *dest, const char *src, size_t n)
{
    size_t i = 0;
    size_t j = 0;
    while (dest[i] != '\0')
        i++;
    while (j < n)
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return dest;
}
