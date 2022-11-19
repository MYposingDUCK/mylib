#include "libmy.h"

char	*my_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;

	i = 0;
	if (!(sub = (char *)malloc(sizeof(*sub) * len + 1)))
		return (NULL);
	if (!s)
		return (sub);
	if ((int)start < my_strlen(s))
	{
		while (i < len)
		{
			sub[i] = s[start + i];
			i++;
		}
	}
	sub[i] = '\0';
	return (sub);
}
