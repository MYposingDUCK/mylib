#include "libmy.h"

char	*my_strnstr(const char *big, const char *little, size_t len)
{
	size_t	biglen;
	size_t	littlelen;
	size_t	counter;

	if (!big && !little)
		return (NULL);
	counter = 0;
	if (*little == '\0')
		return ((char *)big);
	biglen = my_strlen(big);
	littlelen = my_strlen(little);
	if (biglen < littlelen || len < littlelen)
		return (NULL);
	while (counter + littlelen <= len)
	{
		if (my_memcmp(big, little, littlelen) == 0)
			return ((char *)big);
		big++;
		counter++;
	}
	return (NULL);
}
