#include <limits.h>
#include <unistd.h>
#include <stdio.h>

void	ft_print_hex(int num)
{
	char	*hex_symbols;
	int		res;

	hex_symbols = "0123456789abcdef";
	if (num / 16 != 0)
	{
		ft_print_hex(num / 16);
	}
	res = num % 16;
	write(1, &hex_symbols[res], 1);
}



int	ft_atoi(char *str)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	if (str == "-2147483648")
	{
		return (-2147483648);
	}
	if (*str == '-')
	{
		sign = -1;
        str++;
	}
	while (*str && *str >= '0' && *str <= '9')
	{
		result = 10 * result + ((*str++) - '0');
	}
	return (result * sign);
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int num;

		num = ft_atoi(argv[1]);
        printf("%d\n",num);
        if(num <0)
        {
            ft_print_hex((unsigned int )num);
        }
        else    
            ft_print_hex(num);
		
	}
    
}