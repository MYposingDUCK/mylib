#include "libmy.h"

char	*my_strdup(char *src)
{
	char	*s;
	int		len;
	int		i;

	i = 0;
	len = my_strlen(src);
	if (!(s = malloc(sizeof(*s) * len + 1)))
		return (NULL);
	while (i < len)
	{
		s[i] = src[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
