#include <stdio.h>
#include <ctype.h>


int ft_isdigit(char c)
{

    if(c >= '0' && c<='9')
        return 2048;
    return 0;
}


int main(){
    char test ='3';

    printf("original function -> %d\n", isdigit(test));
    printf("my function -> %d\n", ft_isdigit(test));
        
}