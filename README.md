# How to create my own library with C ?

Wth this project, we will run how to build basic files to create own standard libraries and mimic original built-in functions with C language.

## Makefile : For easier compilation. Create scripts to automate compile process. The belows are examples.

1. Variables : CC = gcc, NAME = libft.a, SOURCE = ft_isalpha.c
2. Dynamic naming : OBJ = $(SOURCE:.c=.o)
3. Use of variables : $(NAME) : $(OBJ) ar rc $(NAME) $(OBJ)
4. Command : clean, fclean, re, bonus, etc...

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
