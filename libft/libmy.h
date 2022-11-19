#ifndef LIBMY_H
# define LIBMY_H
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}                   t_list;

t_list  *my_lstnew(void *content);
void    my_lstadd_front(t_list **lst, t_list *new);
int     my_lstsize(t_list *lst);
int		my_strlen(const char *s);
char	*my_strdup(char *src);
size_t	my_strlcpy(char *dest, const char *src, size_t dstsize);
size_t	my_strlcat(char *dest, const char *src, size_t dstsize);
char	*my_strchr(const char *s, int c);
char	*my_strrchr(const char *s, int c);
int		my_strncmp(const char *s1, const char *s2, size_t n);
char	*my_strnstr(const char *big, const char *little, size_t len);
int		my_atoi(char *nptr);
void	*my_memset(void *s, int c, size_t count);
void	my_bzero(void *s, size_t count);
void	*my_calloc (size_t count, size_t size);
void	*my_memcpy(void *dest, const void *src, size_t n);
void	*my_memccpy(void *dest, const void *src, int c, size_t bytes);
void	*my_memmove(void *dest, const void *src, size_t len);
void	*my_memchr(const void *src, int c, size_t n);
int		my_memcmp(const void *src1, const void *src2, size_t n);
int		my_isalpha(int c);
int		my_isdigit(int c);
int		my_isalnum(int c);
int		my_isascii(int c);
int		my_isprint(int c);
int		my_toupper(int c);
int		my_tolower(int c);
char	*my_strjoin(char const *s1, char const *s2);
void	my_putchar_fd(char c, int fd);
void	my_putstr_fd(char *s, int fd);
void	my_putnbr_fd(int n, int fd);
void	my_putendl_fd(char *s, int fd);
char	*my_substr(char const *s, unsigned int start, size_t len);
char	*my_strmapi(char const *s, char (*f)(unsigned int, char));
char	*my_strtrim(char const *s1, char const *set);
char	**my_split(char const *s, char c);
char	*my_itoa(int n);

#endif
