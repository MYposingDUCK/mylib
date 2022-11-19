#include "get_next_line.h"

int	my_strlen(const char *s)
{
	int	count;

	count = 0;
	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}

char	*my_strchr(const char *s, int c)
{
	size_t	i;
	char	*ch;

	i = 0;
	ch = (char *)s;
	while (ch[i] != (char)c)
	{
		if (ch[i] == '\0')
			return (NULL);
		i++;
	}
	return (ch + i);
}

char	*my_strjoin(char *s1, char const *s2)
{
	size_t	len;
	size_t	i;
	char	*strj;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	len = my_strlen(s1) + my_strlen(s2);
	strj = (char *)malloc(sizeof(*strj) * len + 1);
	if (!(strj))
		return (NULL);
	while (*s1 != '\0')
		strj[i++] = *s1++;
	while (*s2 != '\0')
		strj[i++] = *s2++;
	strj[i] = '\0';
	return (strj);
}
