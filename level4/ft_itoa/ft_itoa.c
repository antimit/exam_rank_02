#include <stdlib.h>
#include <stdio.h>

int int_length(int num)
{
    int length;
    if(num<=0)
    {
        length = 1;
    }
    else    
        length = 0;
    while(num)
    {
        length++;
        num/=10;
    }
    return length;
}

char	*ft_itoa(int nbr)
{
    int nLong;
    int len;
    char * result;
    result = (char *)malloc(len +1);
    if(!result)
        return NULL;
    len = int_length(nbr);
    nLong = nbr;
    if(nLong < 0)
        nLong = -nLong;
    result[len] = '\0';
    while (len--)
    {
        result[len] = nLong%10 + '0';
        nLong/=10;
    }
    printf("%d",len);
    if(nbr<0)
        result[0] = '-';
    return result;

}

int main()
{
    char * result;
    result = ft_itoa(-500);
    printf("%s",result);
    return 0;
}
