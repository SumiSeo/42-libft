#include <stdio.h>
#include <ctype.h>


int ft_isascii(int c)
{
    if(c >= 0 && c<=255)
        return 1;
    else
        return 0;
 }



int main()
{
    char test = '3';
    printf("original function -> %d\n", isascii(test));
    printf("my function -> %d\n", ft_isascii(test));
}