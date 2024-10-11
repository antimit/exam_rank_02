
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	gcd(int a, int b)
{
	int	result;

	if (a > b)
	{
		result = b;
	}
	else
	{
		result = a;
	}
	while (result)
	{
		if (a % result == 0 && b % result == 0)
		{
			return (result);
		}
		result--;
	}
    return result;
}

int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int a;
		int b;
		a = atoi(argv[1]);
		b = atoi(argv[2]);
        if(a<=0 || b <=0)
        {
            printf("\n");
            return 0;
        }
		int result = gcd(a, b);
		printf("%d\n",result);
	}
    else
    {
        printf("\n");
    }
}