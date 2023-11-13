CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = hello
SOURCE = $(wildcard *.c)
OBJ = $(SOURCE:.c=.o)

all : $(NAME) 
	@echo $(SOURCE)
	@echo "Hello world"

hello : $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

_%.o : %.c
	@echo $@
	$(CC) -o $@ -c $< $(CFLAGS)

clean :
	rm -rf *.o

fclean :
	rm -rf $(NAME)

re : fclean all 


OBJECTS = %.c
