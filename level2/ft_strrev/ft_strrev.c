#include <stdio.h>

int ft_strlen(char * str)
{
    int i;
    i = 0;
    while(str[i])
    {
        i++;
    }
    return i;
}
char    *ft_strrev(char *str)
{
    int i;
    int j;
    i = 0;
    j = ft_strlen(str) -1 ;
    while(i < j)
    {
        str[i] = str[j];
        i++;
        j--;
    }
    return str;

}

// int main()
// {
//     char result[] = "Hello World";
//     char * result1;
//     result1 = ft_strrev(result);
//     printf("%s",result1);
// }