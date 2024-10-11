#include <unistd.h>
#include <stdio.h>
int    ft_strcmp(char *s1, char *s2)
{
    while(*s1 && *s2 && *s1 == *s2)
    {
        s1++;
        s2++;
    }
    return ((int)*s1 - (int)*s2);
}

// int main()
// {
//     int result;

//     result = ft_strcmp("Hello","");
//     printf("%d",result);
// }
