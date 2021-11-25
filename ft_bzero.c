#include "libft.h"
void ft_bzero(void *str, size_t n)
{
    unsigned char *htr ;
    
    htr = (unsigned char *)str;
    size_t i=0;
    while(i < n)
    {
        htr[i] = '\0';
        i++;
    }
}   