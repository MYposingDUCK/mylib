#include "libft.h"

t_list  *ft_lstnew(void *content)
{
t_list *obj;
obj = malloc(sizeof(*obj));
obj->content = content;
obj->next = NULL;
return(obj); 
}