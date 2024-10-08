
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

int	isSpace(char c)
{
	return (c == 32 || (c >= 9 && c <= 13));
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int end;
		end = ft_strlen(argv[1]) - 1;
		int wasSpace;
		wasSpace = 0;
		if (end < 0)
		{
			write(1, "\n", 1);
            return 0;
		}
		int start;
		start = 0;
		while (argv[1][start] && isSpace(argv[1][start]))
		{
			start++;
		}
		while (end > start && isSpace(argv[1][end]))
		{
			end--;
		}
		while (start <= end)
		{
			while (isSpace(argv[1][start]) && start <= end)
			{
				start++;
				wasSpace = 1;
			}
			if (wasSpace)
			{
				write(1, " ", 1);
				wasSpace = 0;
			}
			write(1, &argv[1][start], 1);
			start++;
		}
	}
	write(1, "\n", 1);
}