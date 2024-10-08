#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


int main(int argc, char * argv[])
{
    if(argc == 4)
    {
        if(argv[2][0]=='*')
        {
            printf("%d",(atoi(argv[1]) * atoi(argv[3])));
        }
        if(argv[2][0]=='/')
        {
            printf("%d",(atoi(argv[1]) / atoi(argv[3])));
        }
        if(argv[2][0]=='+')
        {
            printf("%d",(atoi(argv[1]) + atoi(argv[3])));
        }
        if(argv[2][0]=='-')
        {
            printf("%d",(atoi(argv[1]) - atoi(argv[3])));
            write(1,"d",1);
        }
        
    }

    // int a =  atoi(argv[1]);
    // printf("%d",a);
    write(1,"\n",1);
}