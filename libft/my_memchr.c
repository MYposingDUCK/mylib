#include "libmy.h"

void	*my_memchr(const void *src, int c, size_t n)
{
	while (n--)
	{
		if (*(char *)src == (char)c)
			return ((void *)src);
		src++;
	}
	return (0);
}
