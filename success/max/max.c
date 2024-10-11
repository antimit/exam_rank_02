#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>


int		max(int* tab, unsigned int len)
{
    unsigned int i;
    int maxValue;
    maxValue = -2147483648;
    i = 0;

    while(i < len)
    {
        if(tab[i] > maxValue)
        {
            maxValue = tab[i];
        }
        i++;
    }
    return maxValue;
}


// int main()
// {
//     int tab[] = {5,10,3,12};
//     int result;
//     result = max(tab,4);
//     printf("%d",result);
//     return 0;
// }