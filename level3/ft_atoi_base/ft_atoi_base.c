#include <stdio.h>

char toLower(char c)
{
	if(c >='A' && c <='Z')
	{
		return (c + 32);
	}
	return c;
}

int get_digit(char c, int str_base)
{
	int max_value;
	if(str_base <=10)
	{
		max_value = str_base - 1  +'0';
	}
	else
	{
		max_value = str_base -1 - 10 + 'a';
	}
	if(c >='0' && c <='9' && c <= max_value)
	{
		return (c - '0');
	}
	else if(c >='a' && c <='z' && c <= max_value)
	{
		return (c -'a' +10);
	}
	else
	{
		return -1;
	}

}

int	ft_atoi_base(const char *str, int str_base)
{
	if(!str || str_base<2 || str_base>16)
	{
		return 0;
	}
	int result;
	result = 0;
	while(*str)
	{
		int digit;
		digit = get_digit(toLower(*str),str_base);
		if(digit == -1)
		{
			return (result);
		}
		result = str_base * result + digit;
		str++;
		
	}
	return(result);
}

int main()
{
	int result = ft_atoi_base("1010",2);
	printf("%d",result);
}