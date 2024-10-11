#include <stdio.h>

int	    is_power_of_2(unsigned int n)
{  
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    while(n !=1)
    {
        if(n%2!=0)
        {
            return 0;
        }
        n/=2;
    }
    return 1;
}

// int main()
// {
//     int result;
//     result = is_power_of_2(0);
//     printf("%d",result);
// }