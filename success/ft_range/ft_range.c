#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	return (n);
}

int	*ft_range(int start, int end)
{
	int range = ft_abs(start - end) + 1;
	int *result;
	result = (int *)malloc((range + 1) * sizeof(int));
	int i;
	if (end > start)
	{
		i = 0;
		while (i < range)
		{
			result[i] = start;
			start++;
			i++;
		}
	}
    else
    {
        i = 0;
        while (i< range)
        {
            result[i] = start;
            start--;
            i++;
        }
        
    }
    return(result);
}

// int main()
// {
//     int start;
//     int end;
//     int range;
//     int *result;
//     int i;

    
//     start = 1;
//     end = 3;
//     range = abs(end - start) +1;
//     result = ft_range(start,end);
//     i = 0;
//     while (i < range)
//     {
//         printf("%d",result[i]);
//         i++;
//     }
    
// }