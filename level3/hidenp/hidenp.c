#include <unistd.h>
int ft_strlen(char * str)
{
    int i;
    i = 0;
    while(str[i])
    {
        i++;
    }
    return i;
}

int main(int argc, char *argv[])
{

    if(argc == 3)
    {
        
        int len = ft_strlen(argv[1]);
        int wdmatch;
        wdmatch = 0;
        int i;
        int j;
        i = 0;
        j = 0;
        while(argv[1][i])
        {
            while(argv[2][j])
            {
                if(argv[1][i]==argv[2][j])
                {
                    wdmatch++;
                    break;
                }
                j++;
            }
            i++;
            
        }
        if(wdmatch == len)
        {
            write(1,"1",1);
        }
        else
            write(1,"0",1);
    }
    write(1,"\n",1);
}