#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char * str)
{
    int result;
    result = 0;
    while(*str)
    {
        result = 10 * result + *str++ -'0';
    }
    return (result);
}


void print_num(int n) 
{
    if(n>=10)
    {
        print_num(n/10);
    }
    char c = n%10 + '0';
    write(1,&c,1);
}

int main()
{   
    int i;
    i = 1;
    while(i <=100)
    {
        if(i %3 == 0 && i%5 == 0)
        {
            write(1,"fizzbuzz",8);
        }
        else if(i%3 == 0)
        {
            write(1,"fizz",4);
        }
        else if(i%5 == 0)
        {
            write(1,"buzz",4);
        }
        else
        {
            print_num(i);
        }
        write(1,"\n",1);
        i++;
    }
}