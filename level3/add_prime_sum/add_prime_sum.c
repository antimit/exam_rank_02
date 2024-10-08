#include <unistd.h>
#include <stdio.h>
#include <limits.h>

int isPrime(int n)
{
    if(n<=1)
    {
        return 0;
    }
    int i = 2;
    while(i*i<=n)
    {
        if(n%i==0)
        {
            return 0;
        }
        i++;
    }
    return 1;
}


int ft_atoi(char * str)
{
    if(str == "-2147483648")
    {
        return (-2147483648);
    }
    int result;
    result = 0;
    int sign;
    sign = 1;
    if(*str=='-')
    {
        sign = -1;
        str++;
    }
    while(*str)
    {
        result = (result*10 + *str++) - '0';
    }
    return (result * sign);

}

void putnbr(int n)
{
    long nLong;
    nLong = n;

    if(nLong<0)
    {
        nLong = -nLong;
        write(1,"-",1);
    }
    if(nLong >=10)
    {
        putnbr(nLong/10);
    }
    
    char c = nLong%10 + '0';
    write(1,&c,1);

}

int main(int argc, char * argv[])
{
    if(argc==2)
    {
        int num;
        int result;
        result = 0;
        num = ft_atoi(argv[1]);
        if(num<=0)
        {
            write(1,"\n",1);
            return 0;
        }
        while(num)
        {
            if(isPrime(num))
            {
                result+=num;
            }
            num--;
        }
        putnbr(result);
    }
    write(1,"\n",1);
}


