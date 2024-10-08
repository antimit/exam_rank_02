#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int range;
	int *result;
	int i;
	i = 0;
	if (end > start)
	{
		range = end - start + 1;
		result = (int *)malloc(sizeof(int) * range);
        if(!result)
            return NULL;
		while (start <= end)
		{
			result[i] = start;
            i++;
            start++;
		}
	}
	else
	{
		range = start - end + 1;
		result = (int *)malloc(sizeof(int) * range);
        if(!result)
            return NULL;
        while(start >=end)
        {
            result[i] = start;
            i++;
            start--;
        }
	}

    
    
    return result;
}


int main()
{
    int * result;

    int size;
    int start;
    int end;
    start = 0;
    end = 3;
    if(start < end)
        size = end - start +1;

    else
        size = start - end + 1;
    
    result = ft_range(start,end);

    int i;
    i = 0;
    while (i < size)
    {
        printf("%d",result[i]);
        i++;
    }

    free(result);
    
}


