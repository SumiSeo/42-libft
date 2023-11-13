CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SOURCE = $(wildcard *.c)
OBJ = $(SOURCE:.c=.o)

all : $(NAME)  

$(NAME) : $(OBJ)
	ar rc $(NAME) $(OBJ)

%.o : %.c
	$(CC) -o $@ -c $< $(CFLAGS)

clean :
	rm -rf *.o

fclean : clean
	rm -rf $(NAME)

re : fclean all 


