#include "libft.h"
size_t ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
    size_t i = 0;
    size_t j = 0;
    while (dst[i] != '\0')
        i++;
    if (i < dstsize)
        i = dstsize;
    while (j < dstsize)
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    dst[i] = '\0';
    return i;
}
