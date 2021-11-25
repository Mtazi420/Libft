#include "libft.h"
int ft_atoi(const char *str)
{
    size_t i = 0;
    int res = 0;
    while (str[i] != '\0' && (int)str[i] > 47 && (int)str[i] < 58)
    {

        if (res == 0)
            res = (int)str[i] - 48;
        else
            res = (res * 10) + (str[i] - 48);
        i++;
    }   
    return res;
}