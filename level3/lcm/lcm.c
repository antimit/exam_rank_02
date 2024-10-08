#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>






unsigned int gcd(unsigned int a, unsigned int b)
{
    unsigned int result;
    if(a>b)
        result = b;
    else    
        result = a;

    while(result)
    {
        if(a%result==0 && b%result==0)
        {
            return result;
        }
        result--;
    }
}

int ft_abs(int num)
{
    if(num>0)
    {
        return num;
    }
    return (-num);
}

unsigned int	lcm(unsigned int a, unsigned int b)
{
    if(a == 0 || b == 0)
    {
        return 0;
    }

    int hcf = gcd (a,b);

    unsigned int result;
    result = ft_abs(a*b)/hcf;
    return result;


}

int main()
{
    printf("%u",lcm(12,18));
}