#include <unistd.h>

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char res;
    int i;
    i = 8;
	while (i > 0)
    {
        res = res *2 + (octet%2);
        octet/=2;
        i--;
    }
    return res;
}


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

int main()
{
    unsigned char c = 'a';
    unsigned char result = reverse_bits(c);
    print_bits(c);
    write(1,"\n",1);
    print_bits(result);
    return 0;
}