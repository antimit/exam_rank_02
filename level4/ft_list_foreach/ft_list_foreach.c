#include "ft_list.h"


void decrease_by_one(int * data)
{
    *data -=1;
}

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    while(begin_list)
    {
        f(begin_list->data);
        begin_list= begin_list->next;
    }
}


void add_element(t_list ** list, int data)
{
    t_list * newnode;
    newnode = (t_list *) malloc(sizeof(t_list));
    if(!newnode)
        return;
    int *newdata = (int *)malloc(sizeof(int));
    if(!newdata)
    {
        free(newnode);
        return;
    }
    *newdata = data;
    newnode->data = newdata;
    newnode->next = NULL;
    if(!*list)
        *list = newnode;
    else
    {
        t_list * temp;
        temp = *list;
        while(temp->next)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}

void print_list(t_list * list)
{
    while (list)
    {
        printf("%d",*(int *)list->data);
        list = list->next;
    }
    
}

int main()
{
    t_list *list;
    list = NULL;
    add_element(&list,10);
    add_element(&list,50);
    add_element(&list,100);
    print_list(list);
    ft_list_foreach(list,(void (*)(void *))decrease_by_one);
    printf("\n");
    print_list(list);

}   