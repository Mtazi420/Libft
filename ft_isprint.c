#include "libft.h"
#include <ctype.h>
int ft_isprint(int c)
{
    if ((c > 31 && c < 127))
        return 16384;
    else
        return 0;
}
