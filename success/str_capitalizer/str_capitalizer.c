#include <unistd.h>

char	toUpper(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		c -= 32;
	}
	return (c);
}



int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	if (argc > 1)
	{
		i = 1;
		while (argv[i])
		{
			j = 0;
			if (argv[i][j])
			{
				argv[i][j] = toUpper(argv[i][j]);
                write(1,&argv[i][j],1);   
                j++;
			}
			while (argv[i][j])
			{
				if (argv[i][j - 1] == ' ' || argv[i][j - 1] == '\t')
				{
					argv[i][j] = toUpper(argv[i][j]);
				}
                else if (argv[i][j]>='A' && argv[i][j]<='Z')
                {
                    argv[i][j] +=32;
                }
                write(1,&argv[i][j],1);
                j++;
			}
            write(1,"\n",1);
            i++;
		}
	}
    else
    {
        write(1,"\n",1);
    }
    return 0;
    
}
