#include "libft.h"

t_list  *ft_lstnew(void *content)
{
t_list *obj;
obj = malloc(sizeof(*obj) + sizeof(*content));
obj->content = content;
return(obj); 
}