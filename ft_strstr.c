#include "libft.h"
char *ft_strstr(const char *haystack, const char *needle)
{
    char *ptr1 = NULL;
    size_t i = 0;
    size_t j = 0;
    size_t k = 0;
    while (needle[k] != '\0')
        k++;
    while (haystack[i] != '\0')
    {
        if (j == k - 1)
        {
            ptr1 = (char *)&haystack[i - k + 1];
            return ptr1;
        }
        if (haystack[i] == needle[j] && j == 0)
        {
            j++;
        }
        else
            j == 0;
        if (haystack[i] == needle[j] && j >= 1)
        {
            j++;
        }
        i++;
    }
    return 0;
}
