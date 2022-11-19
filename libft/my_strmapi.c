#include "libmy.h"

char	*my_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*smap;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	if (!(smap = (char*)malloc(sizeof(*smap) * my_strlen(s) + 1)))
		return (NULL);
	while (s[i] != '\0')
	{
		smap[i] = f(i, s[i]);
		i++;
	}
	smap[i] = '\0';
	return (smap);
}
