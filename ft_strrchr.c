#include "libft.h"
char *ft_strrchr(const char *s, int c)
{
    size_t i = 0;
    char *ptr1 = NULL;
    while (s[i] != '\0')
    {
        if (s[i] == c)
        {
            ptr1 = (char *)&s[i];
        }
        i++;
    }
    if (ptr1 != NULL)
        return ptr1;
    return NULL;
}
