#include "libmy.h"

void	*my_memcpy(void *dest, const void *src, size_t bytes)
{
	unsigned char *cdest;
	unsigned char *csrc;

	if (!dest && !src)
		return (dest);
	cdest = (unsigned char*)dest;
	csrc = (unsigned char*)src;
	while (bytes--)
		*cdest++ = *csrc++;
	return (dest);
}
