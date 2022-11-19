#include "libmy.h"

size_t	my_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t counter;
	size_t destlen;
	size_t srclen;

	counter = 0;
	destlen = my_strlen(dest);
	srclen = my_strlen(src);
	if (dstsize == 0 || (destlen >= dstsize))
		return (srclen + dstsize);
	while ((counter < srclen) && (counter < dstsize - destlen - 1))
	{
		dest[destlen + counter] = src[counter];
		counter++;
	}
	dest[destlen + counter] = '\0';
	return (destlen + srclen);
}
