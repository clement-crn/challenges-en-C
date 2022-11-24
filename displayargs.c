#include <unistd.h>

void    ft_write(char* str);

int     main(int argc, char* argv[]){
    
    int i = 1;

    while(i < argc)
    {
        ft_write(argv[i]);
        write(1,"\n",1);
        i++;
    }
    return 0;
}

void    ft_write(char* str){
    
    int i = 0;

    while (str[i]){
        write(1,&str[i],1);
        i++;
    }
}
