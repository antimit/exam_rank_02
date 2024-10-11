#include "list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    if(!lst || !cmp)
    {
        return lst;
    }
    t_list * start;
    start = lst;
    while(lst->next)
    {
        if(cmp(lst->data,lst->next->data)==0)
        {
            int temp;
            temp = lst->data;
            lst->data = lst->next->data;
            lst->next->data = temp;
            lst = start;
        }
        else
        {
            lst = lst->next;
        }
    }
    return start;
}
