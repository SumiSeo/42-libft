#include <string.h>
#include <stdio.h>


char *ft_memset(char *phrase, char str, size_t size)
{
    int i = 0;
    while((size_t)i < size)
    {
        phrase[i] = str;
        i++;
    }
    return phrase;
}

int main()
{
    char str[] = "TEST is for Testing"; 
    char str2[] = "TEST is for Testing";
    memset(str, '@', 5);
    ft_memset(str2, '@', 5);
    printf("original function -> %s\n", str);
    printf("original function returning ->%p\n", memset(str, '@', 5));
    printf("my function -> %s\n",str2);
    printf("myfunction returning ->%p\n", ft_memset(str2, '@', 5));
}

