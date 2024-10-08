

#include <stdio.h>
#include <stdlib.h>

unsigned int	gcd(unsigned int a, unsigned int b)
{
	unsigned int	result;

	if (a > b)
		result = a;
	else
		result = b;
	while (result)
	{
		if (a % result == 0 && b % result == 0)
		{
			return (result);
		}
		result--;
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		unsigned int a;
		unsigned int b;
		unsigned int result;
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		result = gcd(a, b);
		printf("%u", result);
	}
	printf("\n");
}