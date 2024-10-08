
#include <unistd.h>


int main(int argc, char * argv[])
{
    write(1,&argv[1][0],1);
    int i;
    i = 1;
    while(argv[1][i])
    {
        if(argv[1][i]>='A' && argv[1][i]<='Z')
        {
            write(1,"_s",1);
            argv[1][i] +=32;
        }
        write(1,&argv[1][i],1);
        i++;

       
    }
}