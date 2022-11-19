#include "libmy.h"

int	my_memcmp(const void *src1, const void *src2, size_t n)
{
	unsigned char	*mem1;
	unsigned char	*mem2;
	size_t			counter;

	mem1 = (unsigned char *)src1;
	mem2 = (unsigned char *)src2;
	counter = 0;
	while (n--)
	{
		if (mem1[counter] != mem2[counter])
			return (mem1[counter] - mem2[counter]);
		counter++;
	}
	return (0);
}
