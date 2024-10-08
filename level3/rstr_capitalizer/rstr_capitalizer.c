#include <stdio.h>
#include <unistd.h>

int	isSpace(char c)
{
	return (c == 32 || (c >= 9 && c <= 13));
}

char	toLower(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c += 32;
	}
	return (c);
}
char	toUpper(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		c -= 32;
	}
	return (c);
}

int	isLetter(char c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

int	main(int argc, char *argv[])
{
	int	n;
	int	i;
	int	j;
	int	word;
	int	k;

	if (argc > 1)
	{
		n = 1;
		while (argv[n])
		{
			i = 0;
			while (argv[n][i])
			{
				while (isSpace(argv[n][i]) && argv[n][i])
				{
					i++;
				}
				while (!isSpace(argv[n][i]) && argv[n][i])
				{
					argv[n][i] = toLower(argv[n][i]);
					// write(1,&argv[n][i],1);
					i++;
				}
			}
			j = 0;
			while (argv[n][j])
			{
				word = 0;
				while (isSpace(argv[n][j]) && argv[n][j])
				{
					j++;
				}
				while (!isSpace(argv[n][j]) && argv[n][j])
				{
					word = 1;
					j++;
				}
				if (word)
				{
                    j--;
					if (isLetter(argv[n][j]))
					{
						
						argv[n][j] = toUpper(argv[n][j]);
						
					}
                    j++;
                    word = 0;
				}
			}
			k = 0;
			while (argv[n][k])
			{
				write(1, &argv[n][k], 1);
				k++;
			}
			n++;
			write(1, "\n", 1);
		}
	}
	else
		write(1, "\n", 1);
}
