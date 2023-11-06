#include <stdio.h>
#include <ctype.h>

 
int ft_isalpha(char word){
    
        if((word >= 'a' && word <='z') || (word >='A' && word <= 'Z'))
            return 1024;
        else 
            return 0;
 }

int main(){
    int num = 'a';
    printf("original funcion ->%d\n:",isalpha(num));
    printf("my function -> %d\n", ft_isalpha(num));
}