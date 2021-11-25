#include "libft.h"
void *ft_memcpy(void *dst, const void *src, size_t n)
{
    char    *ptr;
    const char  *ptr2;
    int i;

    ptr = (char *)dst;
    ptr2 = (const char *)src;
    i = 0;
    while(i < n)
    {
        ptr[i] = ptr2[i];
        i++;            
    }
    return(ptr);
    
}
