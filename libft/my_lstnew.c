#include "libmy.h"

t_list  *my_lstnew(void *content)
{
t_list *obj;
obj = malloc(sizeof(*obj));
obj->content = content;
obj->next = NULL;
return(obj); 
}