#include "libmy.h"

int	my_tolower(int c)
{
	if (c > 64 && c < 91)
		c += 32;
	return (c);
}
