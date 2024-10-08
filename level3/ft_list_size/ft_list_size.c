#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

int	ft_list_size(t_list *begin_list)
{
    int count;
    count = 0;
    while(begin_list)
    {
        count++;
        begin_list = begin_list->next;
    }
    return (count);
}


void add_elements(t_list ** begin_list, int data)
{
    t_list * newnode;
    newnode = (t_list *)malloc(sizeof(t_list));
    if(!newnode)
        return;

    int * newdata = (int *)malloc(sizeof(int));
    if(!newdata)
    {
        free(newnode);
        return;
    }

    *newdata = data;
    newnode->data = newdata;
    newnode->next = NULL;
    if(*begin_list == NULL)
    {
        *begin_list = newnode;
    }
    else
    {
        t_list * temp = *begin_list;
        while (temp->next)
        {
            temp = temp->next;
        }
        temp->next = newnode;
        
    }
}





int main()
{
    t_list * list;
    list = NULL;
    add_elements(&list,1);
    add_elements(&list,4);
    add_elements(&list,10);
    printf("%d",ft_list_size(list));

}