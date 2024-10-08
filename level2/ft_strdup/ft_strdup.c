#include <stdlib.h>

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
char    *ft_strdup(char *src)
{
    char * result;
    result = (char *) malloc(ft_strlen(src)+1);
    if(!result)
        return NULL;
    int i;
    i = 0;
    while(src[i])
    {
        result[i] = src[i];
        i++;
    }
    result[i] = '\0';
    return result;
}
