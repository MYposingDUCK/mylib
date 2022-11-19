#include "libmy.h"

char	*my_strrchr(const char *s, int c)
{
	size_t	i;
	char	*ch;

	i = 0;
	ch = (char *)s;
	while (ch[i] != '\0')
		i++;
	while (ch[i] != (char)c)
	{
		if (i == 0)
			return (0);
		i--;
	}
	return (ch + i);
}
