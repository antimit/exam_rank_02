#include <unistd.h>
#include <stdio.h>

int main(int argc, char * argv[])
{
    if(argc==2)
    {
        int i;
        i = 0;
        int count;
        count = 1;
        while(argv[1][i])
        {
            if(argv[1][i]>='A' && argv[1][i]<='Z')
            {
                count = argv[1][i] - 64;
            }
            else if(argv[1][i]>='a' && argv[1][i]<='z')
            {
                count = argv[1][i] - 96;
            }
            else
            {
                count = 1;
            }
            while(count--)
            {
                write(1,&argv[1][i],1);
            }
            i++;
        }
    }
    write(1,"\n",1);
}

