#include <limits.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
    char * str1;
    str1 = (char *)str;
    int sign;
    sign = 1;
    int result;
    result = 0;
    if(str1 == "-2147483648")
    {
        return (-2147483648);
    }
    
    if(*str1 == '-')
    {
        sign = -1;
        str1++;
    }
    while(*str1)
    {
        result = 10 * result + *str1++ -'0';
    }
    return (result * sign);
}

int main()
{
    int result;
    result = ft_atoi("56");
    printf("%d",result);
    return 0;
}