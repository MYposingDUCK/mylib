#include "libmy.h"

char	*my_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = my_strlen(s1);
	while (my_strchr(set, s1[i]) && i < j)
		i++;
	if (i == j)
		return (my_strdup(""));
	while (my_strchr(set, s1[j - 1]) && i < j)
		j--;
	str = my_substr(s1, (unsigned int)i, j - i);
	if (str == NULL)
		return (NULL);
	return (str);
}
