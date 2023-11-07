#include <strings.h>
#include <stdio.h>
void ft_bzero(char *s, size_t n){
   
    int i = 0;
    while(i < (int)n)
    {
        s[i] = '\0';
        i++;
    }
 
}

int main()
{
    char str[] = "TESTis for Testing"; 
    printf("original function -> %s\n", str);
    bzero(str, 1);
    printf("original function -> %s\n", str);
    char str2[] = " I am testing this one";
    printf("my function-> %s\n",str2);
    ft_bzero(str2, 1);
    printf("my function -> %s\n", str2);

}