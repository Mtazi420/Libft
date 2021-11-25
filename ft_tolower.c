#include "libft.h"
int ft_tolower(int c)
{
    if (ft_isalpha(c) != 0)
        return c + 32;
    return c;
}
