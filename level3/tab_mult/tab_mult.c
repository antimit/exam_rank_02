#include <stdio.h>
#include <unistd.h>

int	ft_atoi(char *str)
{
	int	result;

	result = 0;
	while (*str)
	{
		result = 10 * result + ((*str++) - '0');
	}
	return (result);
}

char	*ft_print_num(int n)
{
	char	c;

	if (n >= 10)
	{
		ft_print_num(n / 10);
	}
	c = n % 10 + '0';
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	if (argc >1)
	{
		int j;
		int num;
		int result;
		j = 1;
		num = ft_atoi(argv[1]);

		while (j <= 9)
		{
			result = j * num;
			ft_print_num(j);
			write(1, " x ", 3);
			ft_print_num(num);
			write(1, " = ", 3);
			ft_print_num(result);
			write(1, "\n", 1);
			j++;
		}
	}
	else    
        write(1,"\n",1);

}