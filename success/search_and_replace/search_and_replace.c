#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int argc, char **argv)
{
    if (argc != 4) 
    {
        ft_putchar('\n');
        return 0;
    }

    char *str = argv[1];
    char search = argv[2][0];
    char replace = argv[3][0];


    if (argv[2][1] != '\0' || argv[3][1] != '\0')
    {
        ft_putchar('\n');
        return 0;
    }


    while (*str)
    {
        if (*str == search)
            ft_putchar(replace);
        else
            ft_putchar(*str);
        str++;
    }
    ft_putchar('\n');

    return 0;
}
