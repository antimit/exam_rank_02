#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	int	num;
	int	i;

	if (argc == 1)
	{
		// num = atoi(argv[1]);
        num = 1100;
		if (num == 1)
		{
			printf("1\n");
			return 0;;
		}
		i = 2;
		while (i <= num)
		{
			if (num % i == 0)
			{
				printf("%d", i);
				if (num == i)
				{
                    return 0;
				}
				printf("*");
				num /= i;
				i = 1;
                
			}
			i++;
		}
	}
	else
		printf("\n");
}
