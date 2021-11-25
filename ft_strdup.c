#include "libft.h"
char *ft_strdup(const char *s)
{
    size_t i = 0;
    char *res = malloc(strlen(s));
    while (s[i] != '\0')
    {
        res[i] = s[i];
        i++;
    }
    return res;
}
