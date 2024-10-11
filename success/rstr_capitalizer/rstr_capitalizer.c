#include <unistd.h>

int	main(int argc, char *argv[])
{
	if (argc > 1)
	{
		int j;
		j = 1;
		while (argv[j])
		{
			int i;
			i = 0;

			while (argv[j][i])
			{
				if (argv[j][i] >= 'A' && argv[j][i] <= 'Z')
				{
					argv[j][i] += 32;
				}
				if ((argv[j][i] >= 'a' && argv[j][i] <= 'z') && (argv[j][i+ 1] == ' ' || argv[j][i + 1] == '\t' || argv[j][i + 1] == '\0'))
				{
					argv[j][i] -= 32;
				}
				write(1, &argv[j][i], 1);
				i++;
			}
			write(1, "\n", 1);
			j++;
		}
	}
	else
	{
		write(1, "\n", 1);
	}

	return (0);
}

// #include <unistd.h>

// void    rstr_capitalizer(char *str)
// {
//     int i = 0;

//     while (str[i])
//     {
//         if (str[i] >= 'A' && str[i] <= 'Z')
//             str[i] += 32;
//         if ((str[i] >= 'a' && str[i] <= 'z') && (str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\0'))
//             str[i] -= 32;
//         write(1, &str[i++], 1);
//     }
// }

// int main(int argc, char **argv)
// {
//     int i;

//     if (argc == 1)
//         write(1, "\n", 1);
//     else
//     {
//         i = 1;
//         while (i < argc)
//         {
//             rstr_capitalizer(argv[i]);
//             write(1, "\n", 1);
//             i += 1;
//         }
//     }
//     return (0);
// }