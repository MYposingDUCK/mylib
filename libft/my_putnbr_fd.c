#include "libmy.h"

void	my_putnbr_fd(int n, int fd)
{
	if (fd < 0)
		return ;
	if (n == -2147483648)
	{
		my_putchar_fd('-', fd);
		my_putchar_fd('2', fd);
		my_putnbr_fd(147483648, fd);
	}
	else if (n < 0)
	{
		my_putchar_fd('-', fd);
		n = n * (-1);
		if (n > 9)
			my_putnbr_fd(n / 10, fd);
		my_putchar_fd('0' + (n % 10), fd);
	}
	else
	{
		if (n > 9)
			my_putnbr_fd(n / 10, fd);
		my_putchar_fd('0' + (n % 10), fd);
	}
}
