#include <unistd.h>


int ft_atoi(char * str)
{
    int result;
    result = 0;
    while(*str)
    {
        result = 10 * result + (*str++ - '0');
    }
    return result;
}

void print_hex(int num)
{
    char * symbols = "0123456789abcdef";
    if(num >=16)
    {
        print_hex(num/16);
    }
    write(1,&symbols[num%16],1);

}

int main(int argc, char * argv[])
{
    if(argc ==2)
    {
        int num;
        num = ft_atoi(argv[1]);
        print_hex(num);
    }
    write(1,"\n",1);
    return 0;
}