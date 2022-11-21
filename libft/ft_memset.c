#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
    size_t i = 0;
    while (i < n)
    {
        *(s + i) = c;
    }
    return (s);
}
