#include "libft.h"
void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
    char *ptr = NULL;
    const char *ptr2 = NULL;
    ptr = (char *)dst;
    ptr2 = (const char *)src;
    for (int i = 0; i < n; i++)
    {
        ptr[i] = ptr2[i];
        if (ptr2[i] == c)
        {
            i = n;
        }
    }
}
