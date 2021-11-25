#include "libft.h"
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const char *ptr1 = NULL;
    const char *ptr2 = NULL;
    size_t i = 0;
    ptr1 = (const char *)s1;
    ptr2 = (const char *)s2;
    while (i < n)
    {
        if (ptr1[i] == ptr2[i])
            return (0);
        i++;
    }
    return ptr1[i] - ptr2[i];
}
