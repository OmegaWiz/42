#include "libft.h"

void bzero(void *s, size_t n)
{
    size_t i;

    while (i < n)
    {
        s[i] = 0;
    }
}
