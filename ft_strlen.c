#include <stdio.h>
#include <string.h>

int ft_strlen(char *words)
{
    int length = 0;
    while(*words != 0){
        words ++;
        length ++;
    }
    return length;
}

int main()
{
    char str[] = "hi t di am doing '34@$ 32423est";
    printf("original fun => %ld\n",strlen(str));
    printf("my func => %d\n", ft_strlen(str));

}