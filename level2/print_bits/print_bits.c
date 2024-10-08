#include <unistd.h>

void	print_bits(unsigned char octet)
{
    int i;
    i = 8;
    while(i--)
    {
        unsigned char c = ((octet >> i) & 1) + '0';
        write(1,&c,1);
    }
}

int main()
{
    unsigned char c;
    c = 'a';
    print_bits(c);
    return 0;

}