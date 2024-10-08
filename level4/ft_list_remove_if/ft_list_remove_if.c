#include "ft_list.h"
#include <stdlib.h>


void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    t_list * temp;
    temp = *begin_list;
    while(temp)
    {
        if(!cmp(temp->data,data_ref))
        {
            *begin_list = temp->next;
            free(temp);
            ft_list_remove_if(begin_list,data_ref,cmp);
        }
        else
        {
            temp = * begin_list;
            ft_list_remove_if(&temp->next,data_ref,cmp);
        }
    }
}