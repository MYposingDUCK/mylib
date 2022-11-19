#include "libmy.h"

char	*my_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	size_t	i;
	char	*strj;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	len = my_strlen(s1) + my_strlen(s2);
	if (!(strj = (char*)malloc(sizeof(*strj) * len + 1)))
		return (NULL);
	while (*s1 != '\0')
		strj[i++] = *s1++;
	while (*s2 != '\0')
		strj[i++] = *s2++;
	strj[i] = '\0';
	return (strj);
}
