#include <limits.h>
#include <stdio.h>
int		max(int* tab, unsigned int len)
{
    unsigned int i;
    i = 0;
    int max_value;
    max_value = -2147483648;
    while (i < len)
    {
        if(tab[i]> max_value)
        {
            max_value = tab[i];
        }
        i++;
    }
    return max_value;
    
}

// int main()
// {
//     int result;
//     int tab[] = {1,2,3,4,5};
//     result = max(tab,5);
//     printf("%d",result);
//     return 0;
// }