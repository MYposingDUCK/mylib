#include "libmy.h"

void	my_bzero(void *s, size_t count)
{
	unsigned char *dest;

	dest = (unsigned char*)s;
	while (count-- > 0)
		*dest++ = 0;
}
