
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

char	toLower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

int	get_digit(char c, int str_base)
{
	char	maxValue;
	int		result;

	if (str_base <= 10)
		maxValue = str_base - 1 + '0';
	else
		maxValue = str_base - 10 - 1 + 'a';
	if (c >= '0' && c <= '9' && c <= maxValue)
	{
		return (c - '0');
	}
	else if (c >= 'a' && c <= 'f' && c <= maxValue)
	{
		return (c + 10 - 'a');
	}
	else
		return (-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	sign;
	int	result;
	int	digit;

	sign = 1;
	result = 0;
	if (str == NULL || str_base < 2 || str_base > 16)
	{
		return (0);
	}
	if (*str == '-')
	{
		sign = -1;
        str++;
	}
	while (*str)
	{
		digit = get_digit(toLower(*str), str_base);
        if(digit == -1)
        {
            break;
        }
		result = result * str_base + digit ;
		str++;
	}
    return result;
}

int main()
{
    printf("%d",ft_atoi_base("1010",2));

}