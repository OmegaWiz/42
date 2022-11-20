#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	long	i;

	dest = malloc(sizeof(src));
	i = 0;
	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}
