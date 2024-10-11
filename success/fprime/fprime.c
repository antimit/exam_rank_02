#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int result;
		result = atoi(argv[1]);
        if(result<=0)
        {
            printf("\n");
            return 0;
        }
        if(result ==1)
        {
            printf("1");
        }
		int i;
		i = 2;
		while (result != 1)
		{
			if (result % i == 0)
			{
                printf("%d",i);
				if (i == result)
				{
					break ;
				}
                printf("*");
                result/=i;
			}
            else
            {
                i++;
            }
		}
	}

   printf("\n");
}