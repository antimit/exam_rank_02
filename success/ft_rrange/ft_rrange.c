#include <stdlib.h>
#include <stdio.h>

int	abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	return (n);
}

int	*ft_rrange(int start, int end)
{
	int	range;
	int	*result;
	int	i;

	range = abs(end - start) + 1;
	result = (int *)malloc(sizeof(int)*range);
    if(!result)
        return 0;
	if (start <= end)
	{
		i = 0;
		while (i < range)
		{
			result[i] = end;
			end--;
			i++;
		}
	}
	else
	{
		i = 0;
		while (i < range)
		{
			result[i] = end;
			end++;
			i++;
		}
	}
    return result;
}
// 0 - 1 - 2 - 3

// int main()
// {
//     int * result;
//     int a;
//     int b;
//     a = -1;
//     b = 2;
//     int range = abs(a - b) +1;
//     result = ft_rrange(a,b);
//     int i;
//     i =0;
//     while( i < range)
//     {
//         printf("%d\n",result[i]);
//         i++;
//     }

// }
