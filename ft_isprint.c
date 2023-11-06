#include <stdio.h>
#include <ctype.h>

int ft_isprint(int arg)
{
    if(arg >= 32 && arg <=127)
        return 16384;
    else    
        return 0;
}

int main()
{
    char word = '(';
    printf("orignal function ->%d\n", isprint(word));
    printf("my function -> %d\n", ft_isprint(word));
}