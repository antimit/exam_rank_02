#include <unistd.h>
#include <stdio.h>



int is_in_set(char c, const char * set)
{
    int i;
    i =0 ;
    while(set[i])
    {
        if(c == set[i])
        {
            return 1;
        }
        i++;
    }
    return 0;
}


size_t strspn(const char *s, const char *accept)
{
    size_t i;
    i = 0;
    while (s[i])
    {
        if(is_in_set(s[i],accept))
        {
            i++;
        }
    }
    return 0;
    
}

// int main()
// {
//     int result;
//     result = strspn("Hello World","Hello");
//     printf("%d",result);


// }