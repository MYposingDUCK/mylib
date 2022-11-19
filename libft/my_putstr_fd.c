#include "libmy.h"

void	my_putstr_fd(char *s, int fd)
{
	size_t i;

	i = 0;
	if (fd < 0 || !s)
		return ;
	while (s[i] != '\0')
	{
		my_putchar_fd(s[i], fd);
		i++;
	}
}
