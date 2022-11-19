#include "libmy.h"

void	*my_memmove(void *dest, const void *src, size_t len)
{
	char		*new_dest;
	char		*new_src;
	size_t		counter;

	if (!dest && !src)
		return (dest);
	new_dest = (char *)dest;
	new_src = (char *)src;
	if (src < dest)
	{
		counter = len;
		while (counter--)
			new_dest[counter] = new_src[counter];
	}
	else
	{
		counter = 0;
		while (counter < len)
		{
			new_dest[counter] = new_src[counter];
			counter++;
		}
	}
	return (dest);
}
