#include <unistd.h>

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	res;
	int				i;

	res = 0;
	i = 8;
	while (i--)
	{
		res = res*2 +  octet % 2;
		octet /= 2;
	}
	return (res);
}

void	print_bits(unsigned char octet)
{
	int				i;
	unsigned char	c;

	i = 8;
	while (i--)
	{
		c = ((octet >> i) & 1 )+ '0';
		write(1, &c, 1);
	}
}

int	main(void)
{
	unsigned char c;
	c = 'a';
	unsigned res;
    res = reverse_bits(c);

    print_bits(c);
    write(1,"\n",1);
    print_bits(res);

}