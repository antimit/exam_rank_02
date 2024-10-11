#include <stdio.h>

unsigned int	lcm(unsigned int a, unsigned int b)
{
    if(!a || !b)
    {
        return 0;
    }
    int result;
    if(a>b)
    {
        result = a;
    }
    else
    {
        result = b;
    }
    while(1)
    {
        if(result%a==0 && result%b==0)
        {
            return result;
        }
        result++;
    }
}

// int main()
// {
//     int result;
//     result = lcm(-1,2932);
//     printf("%d",result);
// }