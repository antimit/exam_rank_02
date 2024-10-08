#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	isSpace(char c)
{
	return (c == 32 || (c >= 9 && c <= 13));
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{

        
		int i;
		i = 0;
		int len = ft_strlen(argv[1]) - 1;
        if(len==-1)
        {
            write(1,"\n",1);
            return 0;
        }

		while ( len >=0 && isSpace(argv[1][len]))
		{
			len--;
		}

		while (len >= 0  && !isSpace(argv[1][len]))
		{
			len--;
		}
        len+=1;
        while( argv[1][i]&&!isSpace(argv[1][len]))
        {
            write(1,&argv[1][len],1);
            len++;
        }
	}

    write(1,"\n",1);
	return (0);
}


