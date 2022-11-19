#include "libmy.h"

char	*my_strchr(const char *s, int c)
{
	size_t	i;
	char	*ch;

	i = 0;
	ch = (char *)s;
	while (ch[i] != (char)c)
	{
		if (ch[i] == '\0')
			return (0);
		i++;
	}
	return (ch + i);
}
