#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void print_num(int num)
{
    long nLong;
    nLong = num;
    if(nLong<0)
    {
        nLong = -nLong;
        write(1,"-",1);
    }
    if(nLong >=10)
    {
        print_num(nLong/10);
    }
    char c = nLong%10 + '0';
    write(1,&c,1);

}

int	main(int argc, char *argv[])
{
	if (argc == 4)
	{
		int a = atoi(argv[1]);
		int b = atoi(argv[3]);
        int result;
        if(argv[2][0]=='-')
        {
            result = a - b;
        }
        if(argv[2][0]=='+')
        {
            result = a + b;
        }
        if(argv[2][0]=='*')
        {
            result = a * b;
        }
        if(argv[2][0]=='/')
        {
            result = a / b;
        }
        print_num(result);
	}

  
    write(1,"\n",1);
}