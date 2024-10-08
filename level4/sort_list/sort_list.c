#include "ft_list.h"
#include <stdio.h>

int	ascending(int a, int b)
{
	return (a <= b);
}

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list	*start;
	int temp;

	start = lst;
	while (lst && lst->next)
	{
		if ((*cmp)((int)lst->data, lst->next->data) == 0)
		{
			temp = lst->data;
			lst->data = lst->next->data;
			lst->next->data = temp;
			lst = start;
		}
		else
			lst = lst->next;
	}
	return (lst);
}

// void	add_element(t_list **lst, int data)
// {
// 	t_list	*newnode;
// 	int		*newdata;
// 	t_list	*temp;

// 	newnode = (t_list *)malloc(sizeof(t_list));
// 	if (!newnode)
// 	{
// 		return ;
// 	}
// 	newdata = (int *)malloc(sizeof(int));
// 	if (!newdata)
// 	{
// 		free(newnode);
// 		return ;
// 	}
// 	*newdata = data;
// 	newnode->data = (void *)newdata;
// 	newnode->next = NULL;
// 	if (!*lst)
// 	{
// 		*lst = newnode;
// 	}
// 	else
// 	{
// 		temp = *lst;
// 		while (temp->next)
// 		{
// 			temp = temp->next;
// 		}
// 		temp->next = newnode;
// 	}
// }

void add_element(t_list ** lst, int data)
{
    t_list * newnode;
    newnode = (t_list *)malloc(sizeof(t_list));
    if(!newnode)
    {
        return;
    }
    newnode->data = data;
    newnode->next = NULL;
    if(!*lst)
    {
        *lst = newnode;
    }

    else
    {
        t_list * temp;
        temp = *lst;
        while (temp->next)
        {
            temp = temp->next;
        }
        temp->next = newnode;
        
    }
}

void	print_list(t_list *lst)
{
	while (lst)
	{
		printf("%d\n",lst->data);
		lst = lst->next;
	}
}

int	main(void)
{
	t_list *lst;
	lst = NULL;
	add_element(&lst, 50);
	add_element(&lst, 10);
	add_element(&lst, 400);
	print_list(lst);
    sort_list(lst,ascending);
    printf("\n");
    print_list(lst);

	return (0);
}