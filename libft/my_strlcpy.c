#include "libmy.h"

size_t	my_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t len;
	size_t i;

	i = 0;
	if (!src)
		return (0);
	len = my_strlen(src);
	if (dstsize == 0)
		return (len);
	dstsize--;
	while (i < dstsize && i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}
