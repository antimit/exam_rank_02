#include <unistd.h>

void putnbr(int n)
{
    long nLong = n;
    if(nLong < 0)
    {
        nLong = -nLong;
    }

    if(nLong/10!=0)
    {
        putnbr(nLong/10);
    }
    char c = nLong%10 + '0';
    write(1,&c,1);
}
int main(int argc, char * argv[])
{
    if(argc>1)
    {
        putnbr(argc-1);
    }
   
}