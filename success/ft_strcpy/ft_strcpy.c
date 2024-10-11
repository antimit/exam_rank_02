#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char * str)
{
    int i;
    i =0 ;
    while(str[i])
    {
        i++;
    }
    return i;
}

char    *ft_strcpy(char *s1, char *s2)
{
    int len;
    len = ft_strlen(s2);
       
    s1 = (char *) malloc(len +1);
    if(!s1)
        return NULL;
    int i;
    i =0;
    while(s2[i])
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i]= '\0';
    return s1;
}


// int main()
// {
//     char * result  = NULL;
//     result = ft_strcpy(result,"Hello World");
//     printf("%s",result);
// }