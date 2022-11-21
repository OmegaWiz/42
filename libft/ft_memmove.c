#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    char *tmp;
    size_t i;

    tmp = ft_strdup(src);
    i = 0;
    while (i < n)
    {
        dest[i] = tmp[i];
        i++;
    }
    return (dest);
}
