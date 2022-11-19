#include "libmy.h"

void	*my_memset(void *s, int c, size_t count)
{
	unsigned char *dest;

	dest = (unsigned char*)s;
	while (count-- > 0)
		*dest++ = (unsigned char)c;
	return (s);
}
