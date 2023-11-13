CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = hello
SOURCE = $(wildcard *.c)
OBJ = $(SOURCE:.c=.o)

all : $(NAME) 

hello : $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

%.o : %.c
	$(CC) -o $@ -c $< $(CFLAGS)

clean :
	rm -rf *.o

fclean : clean
	rm -rf $(NAME)

re : fclean all 


