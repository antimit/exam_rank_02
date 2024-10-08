#include <unistd.h>

int check_double_one(int pos,char c,char * str)
{
    int i;
    i = 0;
    while(i < pos)
    {
        if(str[i] == c)
        {
            return 1;
        }
        i++;
    }
    return 0;
}



int main(int argc, char * argv[])
{
    
    if(argc ==3 )
    {
        
        int i;
        i = 0;
        int j;
        while(argv[1][i])
        { 
            j = 0;
            while(argv[2][j])
            {
                if(argv[1][i]== argv[2][j])
                {
                    if(!check_double_one(i,argv[1][i],argv[1]))
                    {
                        write(1,&argv[1][i],1);
                        break;
                    }
                }
                j++;
            }

            i++;
        }

    }
    return 0;
}