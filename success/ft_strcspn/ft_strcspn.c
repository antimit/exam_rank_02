
#include <stdlib.h>

int is_in_set(char c, const char * reject)
{
    int i;
    i = 0;
    while (reject[i])
    {
        if(c == reject[i])
        {
            return 0;
        }
        i++;
    }
    return 1;
    
}

size_t	ft_strcspn(const char *s, const char *reject)
{
    size_t len;
    len = 0;
    while (s[len] && is_in_set(s[len],reject))
    {
        len++;
    }
    return len;
    
}