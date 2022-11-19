#include "libmy.h"

void	*my_memccpy(void *dest, const void *src, int c, size_t bytes)
{
	unsigned char			*new_dest;
	unsigned char			*new_src;
	unsigned char			symbol;
	size_t					counter;

	if (!dest && !src)
		return (dest);
	new_dest = (unsigned char *)dest;
	new_src = (unsigned char *)src;
	symbol = (unsigned char)c;
	counter = 0;
	while (counter < bytes)
	{
		new_dest[counter] = new_src[counter];
		if (new_dest[counter] == symbol)
			return (dest + (counter + 1));
		counter++;
	}
	return (0);
}
