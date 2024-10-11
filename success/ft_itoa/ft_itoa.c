#include <stdlib.h>
#include <stdio.h>

int int_length(int n)
{
    int len;
    if(n <= 0)
    {
        len = 1;
    }
    else 
    {
        len =0;
    }
    while(n)
    {
        len++;
        n/=10;
    }
    return len;
}

char	*ft_itoa(int nbr)
{
    long nLong;
    nLong = nbr;
    if(nLong < 0)
    {
        nLong = -nLong;
    }
    int len;
    len = int_length(nbr);
    char * result;
    result = (char *) malloc(len+1);
    if(!result)
        return NULL;
    while(len--)
    {
        result[len] = nLong%10 + '0';
        nLong/=10;
    }
    if(nbr < 0)
    {
        result[0] = '-';  
    }
    return result;
}


// int main()
// {
//     char * result;
//     result = ft_itoa(0);
//     printf("%s",result);
// }