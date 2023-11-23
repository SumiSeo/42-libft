# How to create my own library with C ?

Wth this project, we will run how to build basic files to create own standard libraries and mimic original built-in functions with C language.
</br>

## Makefile : For easier compilation. Create scripts to automate compile process. The belows are examples.

1. Variables : CC = gcc, NAME = libft.a, SOURCE = ft_isalpha.c
2. Dynamic naming : OBJ = $(SOURCE:.c=.o)
3. Use of variables : $(NAME) : $(OBJ) ar rc $(NAME) $(OBJ)
4. Command : clean, fclean, re, bonus, etc...
   </br>

## libft.h : By creating this header, we can call all the functions in another functions.

1. #ifndef LIBFT_H
2. #define LIBFT_H
3. #include all the built in libraries
4. Writing function prototypes : int ft_isalpha(int c);
5. Structure :
   typedef struct s_list{
   void *context;
   struct s_list *next;
   } t_list;
6. #endif
   </br>

## Functions : These sections are explaninig functions that I have struggled. The note can be confused for most of people ;-)

### ft_atoi.c

Take string as argument and then switch to the integer. Like real numbers, -(negative) and +(positive) should be handled.
(ex) "---23493" -> -23493, " 48" -> 48

- Handle INT_MAX and INT_MIN : Simply switch data type to long, then it will handle it automatically.
  long nb;
- Handle empty space. There are several spaces in C(ASCII). So I have to handle many spaces and normal space. Create a condition for handling these.
  if(nbtr[i] >= '\t' && nbtr[i] <= '\r') || nbtr[i] == ' '
- Handle negative and positive sign.
  if(nbtr[i] == '-' || nbtr[i] == '+')
  {
  if(nbtr[i] == '-')
  sign \*= -1;
  i++;
  }
- Switch string to number
  while(nbtr[i]>=0 && nbtr[i]<='9')
  {
  nb = (nb \*10) (nbtr[i] - '0');
  i++;
  }

### ft_bzero.c

Take the string until the size of 'n' and change the string to '\0' value. Since we take the string as type of void, we have to cast(indicate the type of data). The code below is different from like my original function, but here the main point is casting string type and access to each string

- while(i < n)
  {
  \*(char \*)(s + i) = '\0';
  i++;
  }

### ft_caloc.c
