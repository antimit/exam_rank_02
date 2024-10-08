#include <unistd.h>
#include <stdio.h>
int is_in_set(char c, const char * set)
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
size_t	ft_strcspn(const char *s, const char *reject)
{
    int i;
    i = 0;

    while(s[i])
    {
        if(is_in_set (s[i],reject))
        {
            return i;
        }
        i++;
    }
    return i;
}

int main()
{
    int result = ft_strcspn("Hello World","World");
    printf("%d",result);

}