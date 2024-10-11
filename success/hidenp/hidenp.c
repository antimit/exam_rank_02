#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int wdlen;
		int len;
		int i;
		int j;
		wdlen = 0;
		len = ft_strlen(argv[1]);
		i = 0;
		j = 0;
		while (argv[1][i])
		{
			while (argv[2][j])
			{
				if (argv[1][i] == argv[2][j])
				{
					wdlen++;
					break ;
				}
				j++;
			}
			i++;
		}
		if (wdlen == len)
		{
			write(1, "1", 1);
		}
		else
		{
			write(1, "0", 1);
		}
	}
	write(1, "\n", 1);
}