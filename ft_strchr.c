#include "libft.h"
char *ft_strchr(const char *s, int c)
{
    size_t i = 0;
    char *ptr1 = NULL;

    while (s[i] != '\0')
    {
        if (s[i] == c)
        {
            ptr1 = (char *)&s[i];
            return ptr1;
        }
        i++;
    }
    return NULL;
}