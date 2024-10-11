
#include <stdio.h>
#include <stdlib.h>

int	is_power_of_2(unsigned int n)
{
	if (n == 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (1);
	}
	while (n > 1)
	{
		if (n % 2 != 0)
		{
			return (0);
		}
		n /= 2;
	}
	return (1);
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
        int num;
        num = atoi(argv[1]);
		int result;
		result = is_power_of_2(num);
		printf("%d", result);
	}
    printf("\n");
}