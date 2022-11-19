#include "libmy.h"

static size_t	my_intlen(int n)
{
	size_t	l;

	if (n == 0)
		return (1);
	l = 0;
	if (n < 0)
		l++;
	while (n)
	{
		n /= 10;
		l++;
	}
	return (l);
}

char			*my_itoa(int n)
{
	size_t	len;
	size_t	m;
	char	*rtrn;

	m = 0;
	len = my_intlen(n);
	if (n == -2147483648)
		return (my_strdup("-2147483648"));
	if (!(rtrn = (char *)malloc(len + 1)))
		return (NULL);
	rtrn[len] = '\0';
	if (n < 0)
	{
		rtrn[0] = '-';
		n *= -1;
		m = 1;
	}
	while (len-- > m)
	{
		rtrn[len] = '0' + n % 10;
		n /= 10;
	}
	return (rtrn);
}
