#include <unistd.h>

int checkdouble_one(int pos, char c, char * str)
{
    int i;
    i =0 ;
    while(i < pos)
    {
        if(c == str[i])
        {
            return 1;
        }
        i++;
    }
    return 0;
}

int checkdouble_two(char c, char * str)
{
    int i;
    i = 0;
    while(str[i])
    {
        if(c == str[i])
        {
            return 1;
        }
        i++;
    }
    return 0;
}


int main(int argc, char * argv[])
{
    if(argc == 3)
    {
        int i;
        i = 0;
        while(argv[1][i])
        {
            if(!checkdouble_one(i,argv[1][i],argv[1]))
            {
                write(1,&argv[1][i],1);
            }
            i++;
        }

        int j;
        j = 0;
        while(argv[2][j])
        {
            
            if(!checkdouble_two(argv[2][j],argv[1]))
            {
                if(!checkdouble_one(j,argv[2][j],argv[2]))
                {
                    write(1,&argv[2][j],1);
                }
            }
            j++;
        }
    }
    write(1,"\n",1);
}