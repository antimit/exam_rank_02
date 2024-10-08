
#include <unistd.h>
void print_bits(unsigned char octet)
{
    int i;
    i = 8;
    while(i--)
    {
        char c = ((octet>>i)&1) + '0';
        write(1,&c,1);
    }
}

unsigned char	swap_bits(unsigned char octet)
{
    return((octet<<4)|(octet>>4));
}

int main()
{
    unsigned char c = 'a';
    unsigned char result;
    result = swap_bits(c);
    print_bits(c);
    write(1,"\n",1);
    print_bits(result);
}