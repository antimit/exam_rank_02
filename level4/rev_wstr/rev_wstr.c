#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	isSpace(char str)
{
	return (str == 32 || (str >= 9 && str <= 13));
}

int	count_words(char *str)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && isSpace(str[i]))
		{
			i++;
		}
		if (str[i] && !isSpace(str[i]))
		{
			count++;
			i++;
		}
		while (str[i] && !isSpace(str[i]))
		{
			i++;
		}
	}
	return (count);
}

char	*ft_word(char *str)
{
	int		len;
	char	*result;
	int		i;

	len = 0;
	while (str[len] && !isSpace(str[len]))
	{
		len++;
	}
	result = (char *)malloc(len + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (str[i] && !isSpace(str[i]))
	{
		result[i] = str[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

char	**ft_split(char *str)
{
	char	**result;
	int		i;

	result = (char **)malloc(sizeof(char *) * (count_words(str) + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (*str)
	{
		while (*str && isSpace(*str))
			str++;
		if (*str && !isSpace(*str))
		{
			result[i] = ft_word(str);
			if (!result[i])
			{
				while (i > 0)
				{
					free(result[i - 1]);
					i--;
				}
				free(result);
				return (NULL);
			}
			i++;
		}
		while (*str && !isSpace(*str))
			str++;
	}
	result[i] = NULL;
	return (result);
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		char **result;
		result = ft_split(argv[1]);
		int i;
		i = 0;

		while (result[i])
		{
			i++;
		}

		while (i--)
		{
			int j;
			j = 0;
			while (result[i][j])
			{
				write(1, &result[i][j], 1);
				j++;
			}
			if (i > 0)
			{
				write(1, " ", 1);
			}
		}
	}
	write(1, "\n", 1);
}