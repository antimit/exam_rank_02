#include <unistd.h>
#include <printf.h>

int is_in_set(char c,const char * set)
{
    int i;
    i = 0;
    while(set[i])
    {
        if(set[i]==c)
        {
            return 1;
        }
        i++;
    }
    return 0;
}


char *strpbrk(const char *s, const char *accept)
{
    int i;
    i = 0;
    while(s[i])
    {
        if(is_in_set(s[i],accept))
        {
            return(&s[i]);
        }
        i++;    
    }
    return NULL;
}


