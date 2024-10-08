#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	sort_int_tab(int *tab, unsigned int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
}


int main()
{
    int n = 5;
    int tab [] ={8,9,4,2,1};
    sort_int_tab(tab,5);
    int i;
    i = 0;
    while(i < 5)
    {
        printf("%d\n",tab[i]);
        i++;
    } 
}