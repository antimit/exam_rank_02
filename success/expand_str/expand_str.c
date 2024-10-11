
#include <stdlib.h>
#include <unistd.h>

int	isSpace(char c)
{
	return (c == 32 || (c >= 9 && c <= 13));
}

int	ft_count_words(char *str)
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
	{
		return (NULL);
	}
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
	int		j;

	result = (char **)malloc((ft_count_words(str) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	while (*str)
	{
		while (*str && isSpace(*str))
		{
			str++;
		}
		if (*str && !isSpace(*str))
		{
			result[i] = ft_word(str);
			if (!result[i])
			{
				j = 0;
				while (j < i)
				{
					free(result[j]);
					j++;
				}
				free(result);
			}
			i++;
		}
		while (*str && !isSpace(*str))
		{
			str++;
		}
	}
	result[i] = NULL;
	return (result);
}

int	main(int argc, char *argv[])
{
	char	**result;
	int		i;
	int		j;
	

	if (argc == 2)
	{
		result = ft_split(argv[1]);
		if (!result)
			return (0);
		i = 0;
		while (result[i])
		{
			j = 0;
			while (result[i][j])
			{
				write(1, &result[i][j], 1);
				j++;
			}
			if (i < ft_count_words(argv[1]) - 1)
			{
				write(1, "   ", 3);
			}
			i++;
		}
	}
	
	write(1, "\n", 1);
}

// int	main(int argc, char *argv[])
// {
// 	if (argc == 2)
// 	{
// 		int i;
// 		i = 0;

// 		while (argv[1][i] && isSpace(argv[1][i]))
// 		{
// 			i++;
// 		}
// 		while (argv[1][i])
// 		{
// 			while (argv[1][i] && !isSpace(argv[1][i]))
// 			{
// 				write(1, &argv[1][i], 1);
// 			}
// 			while (argv[1][i] && isSpace(argv[1][i]))
// 			{
// 				i++;
// 			}
// 		}
// 	}
// }