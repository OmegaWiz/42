#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;

    i = 0;
    if (dest + n > src)
    {
        return (ft_memmove(dest, src, n));
    }
    while (i < n)
    {
        dest[i] = src[i];
    }
    return (dest);
}
