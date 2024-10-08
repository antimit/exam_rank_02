#include <unistd.h>

void	ft_str_capitalizer(char *str)
{
	int	i;

	i = 0;
	if (str[i] && str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] -= 32;
	}
	write(1, &str[i], 1);
	while (str[++i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		if (str[i] >= 'a' && str[i] <= 'z' && (str[i - 1] == ' ' || str[i- 1] == '\t'))
		{
			str[i] -= 32;
		}
		write(1, &str[i], 1);
	}
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	int	i;

	if (argc > 1)
	{
		i = 1;
		while (argv[i])
		{
			ft_str_capitalizer(argv[i]);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}

// int	isSpace(char c)
// {
// 	return (c == 32 || (c >= 9 && c <= 13));
// }

// int isLetter(char c)
// {
//     return ((c>='A' && c <='Z') || (c>='a' && c <='z'));
// }

// int	main(int argc, char *argv[])
// {
//     if(argc >1)
//     {
//         int n;
//         n = 0;
//         while(argv[n])
//         {
//             int i;
//             i = 0;
//             while(argv[n][i])
//             {
//                 int first_letter;
//                 first_letter = 0;
//                 while(argv[n][i] && isSpace(argv[n][i]))
//                 {
//                     i++;
//                 }
//                 while(argv[n][i] && !isSpace(argv[n][i]))
//                 {
//                     if(isLetter(argv[n][i]) )
//                     {

//                     }
//                 }

//             }
//         }
//     }
// }
