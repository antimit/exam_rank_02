#include <unistd.h>

void	print_num(int n)
{
	char	c;

	if (n >= 10)
	{
		print_num(n / 10);
	}
	c = n % 10 + '0';
	write(1, &c, 1);
}

int	ft_atoi(char *str)
{
	int	result;

	result = 0;
	while (*str)
	{
		result = 10 * result + (*str++ - '0');
	}
	return (result);
}

int	main(int argc, char *argv[])
{
	int	a;
	int	i;
	int	result;

	if (argc > 1)
	{
		a = ft_atoi(argv[1]);
		result = 0;
		i = 1;
		while (i <= 9)
		{
			print_num(i);
			write(1, " x ", 3);
			print_num(a);
			write(1, " = ", 3);
			result = i * a;
			print_num(result);
			i++;
			write(1, "\n", 1);
		}
	}
	else
	{
        write(1,"\n",1);
	}
}
