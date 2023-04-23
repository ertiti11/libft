
#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int i;
	int tofind;

	tofind = 0;
	i = 0;

	while (((char *)str)[i] != '\0' && tofind == 0)
	{
		if (((char *)str)[i] == c)
		{
			return ((char *)&str[i]);
			tofind = 1;
		}
	}
	if (c == '\0')
	{
		return ((char *)&str[i]);
	}
	return (NULL);
}