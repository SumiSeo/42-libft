#include <stdio.h>
#include <ctype.h>

int ft_isalnum(char c)
{
    if((c >= 'a' && c <='z') || (c >='A' && c <= 'Z') || (c >= '0' && c<='9'))
            return 8;
    else    
            return 0;
}

int main()
{
    char test = '$';
    printf("original function -> %d\n",isalnum(test));
    printf("my function -> %d\n",ft_isalnum(test));
}