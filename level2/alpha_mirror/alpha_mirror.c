#include<stdio.h>
char transpond(char a)
{
    char offset = a - 64;
    return 91 - offset;
}

int main()
{
    for(char a = 'A'; a<= 'Z'; ++a)
    {
        printf("%c \t -> %c\n",a, transpond(a));
    }
}