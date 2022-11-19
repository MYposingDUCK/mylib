#include "libmy.h"

void	*my_calloc(size_t count, size_t size)
{
	void *mem;

	if (!(mem = malloc(count * size)))
		return (NULL);
	my_memset(mem, 0, count * size);
	return (mem);
}
