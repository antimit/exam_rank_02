#include <unistd.h>

void print_num(int n)
{
    if(n>=10)
    {
        print_num(n/10);
    }
    char c = n % 10 + '0';
    write(1,&c,1);
}

int main(int argc, char *argv[])
{
    if(!argv)
    {
    }
    if(argc >1)
    {
        print_num(argc-1);
    }
    else
    {
        print_num(0);
    }
    write(1,"\n",1);
    
    return 0;
}