#include "libft.h"
char *ft_strnstr(const char *big, const char *little, size_t len)
{
    char *ptr1 = NULL;
    size_t i = 0;
    size_t j = 0;
    size_t k = 0;
    while (little[k] != '\0')
        k++;
    while (big[i] != '\0' && i < len)
    {
        if (j == k - 1)
        {
            ptr1 = (char *)&big[i - k + 1];
            return ptr1;
        }
        if (big[i] == little[j] && j == 0)
        {
            j++;
        }
        else
            j == 0;
        if (big[i] == little[j] && j >= 1)
        {
            j++;
        }
        i++;
    }
    return 0;
}