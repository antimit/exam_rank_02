#include <unistd.h>

int main(int argc, char *argv[])
{
    if(argc == 2)
    {
        int i;
        i = 0;
        while (argv[1][i])
        {
            
            if(argv[1][i]>='A' && argv[1][i] <='Z')
            {
                char result = (64 - argv[1][i]) + 91;  
                write(1,&result,1);
            }
            else if(argv[1][i]>='a' && argv[1][i] <='z')
            {
                char result = (96 - argv[1][i]) + 123;  
                write(1,&result,1);
            }
            else
            {
                write(1,&argv[1][i],1);
            }
            i++;
               
        }
        
    }    
    write(1,"\n",1);
}