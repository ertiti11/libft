#include "libft.h"
#include <stdlib.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned const char *s;
	unsigned char *d;

	size_t i;
	s = (unsigned char *)src;
	d = (unsigned char *)dest;

	while (dest == src || !n)
	{
		return (dest);
	}

	while (n > i)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}