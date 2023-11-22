CC = cc
CFLAGS = -Wall -Wextra -Werror -g3
NAME = libft.a
SOURCE = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
			ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c \
			ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c \
			ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c \
			ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c \
			ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
			ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
			ft_striteri.c
OBJ = $(SOURCE:.c=.o)
BONUS_SOURCE = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
				ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c\
				ft_lstmap.c
BONUS_OBJ = $(BONUS_SOURCE:.c=.o)
RM = rm -rf
all : $(NAME)  

$(NAME) : $(OBJ)
	ar rc $(NAME) $(OBJ)

bonus : $(OBJ) $(BONUS_OBJ)
	ar rc $(NAME) $(OBJ) $(BONUS_OBJ)

clean :
	$(RM) $(OBJ) $(BONUS_OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all 

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS)  $(BONUS_SOURCE) $(SOURCE)
	gcc -nostartfiles -shared -o libft.so  $(OBJ) $(BONUS_OBJ)
