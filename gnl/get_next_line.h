#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

int		my_strlen(const char *s);
char	*get_next_line(int fd);
char	*my_strchr(const char *s, int c);
char	*my_strjoin(char *s1, char const *s2);

#endif
