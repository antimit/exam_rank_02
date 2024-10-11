#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

int	cmp(void *a, void *b)
{
	return (*(int *)a - *(int *)b);
}
void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*current;
	t_list	*prev;
	t_list	*temp;

	current = *begin_list;
	prev = NULL;
	while (current)
	{
		if (cmp(current->data, data_ref) == 0)
		{
			if (prev)
			{
				prev->next = current->next;
			}

            else
            {
                *begin_list = current->next;
            }
			temp = current;
			current = current->next;
			free(temp->data);
			free(temp);
		}
		else
		{
			prev = current;
			current = current->next;
		}
	}
}

void	add_element(t_list **lst, int data)
{
	int		*newdata;
	t_list	*newnode;
	t_list	*temp;

	newdata = (int *)malloc(sizeof(int));
	if (!newdata)
		return ;
	*newdata = data;
	newnode = (t_list *)malloc(sizeof(t_list));
	if (!newnode)
	{
		free(newdata);
		return ;
	}
	newnode->data = newdata;
	newnode->next = NULL;
	if (!*lst)
		*lst = newnode;
	else
	{
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
		printf("%d\n", *(int *)lst->data);
		lst = lst->next;
	}
}

int	main(void)
{
	t_list	*lst;
	int		a;
    a = 10;
	int		*p;
    p = &a;
	lst = NULL;
	add_element(&lst, 10);
	add_element(&lst, 30);
	add_element(&lst, 20);
    print_list(lst);
    printf("\n");
	ft_list_remove_if(&lst,(void *)p,cmp);
    print_list(lst);
}
