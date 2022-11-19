#include "libmy.h"

int	my_atoi(char *nptr)
{
	long long	result;
	int			sign;

	sign = 1;
	result = 0;
	while (*nptr == ' ' || (*nptr >= '\t' && *nptr <= '\r'))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr++ == '-')
			sign = -1;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		result *= 10;
		result += *nptr;
		result -= '0';
		nptr++;
		if (result > 2147483647 && sign == 1)
			return (-1);
		if (result > 2147483648 && sign == -1)
			return (0);
	}
	return (result * sign);
}
