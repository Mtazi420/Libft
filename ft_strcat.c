#include "libft.h"
char *ft_strcat(char *dest, const char *src)
{
    size_t i = 0;
    size_t j = 0;
    while (dest[i] != '\0')
        i++;
    while (src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    return dest;
}
