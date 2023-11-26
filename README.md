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

### ft_calloc.c

This function is using malloc function to allocation memories. There are two differences between malloc and calloc. Calloc takes size and it initiate memory '0'value.

- What is size : It is bytes(octet), for int it is 4 and for char it is 1.

- what is count : It is total length of memory allcoation.

But if size is too big allocation would be fail so we have to check several conditions.

1. if(the count != 0 && total_size / count !=size){return NULL}
2. ptr = malloc(total_size);
3. if(!ptr){return NULL}
4. while(i < total\*size){ \*((char \*)(ptr+i) = 0); i++;}

### ft_itoa.c

This function is oppostive of ft_atoi.c function. It takes integer as an argument and convert to string.

- To convert number, I have to count how many char will be returned. To do that create static function just for counting length of returned value. Since it is number, have to check with three conditions. And then should return total length.
  if(n ==0){
  return 1;
  }
  if(n <0)
  {
  n \*= -1;
  total++;
  }
  while(n>0)
  {
  total++;
  n = n/ 10;
  }
- Now, since we have total number +1 (null terminated value) let's create dynmaic array either calloc or malloc. It allocation fails(if it is empty) just return Null.
  If (n ==0){
  dest[0] = '0';
  }
  If(n_long <0)
  {
  dest[0] = '-';
  n_long \*= -1;
  i++;
  }
  while(count >i)
  {
  dest[--count] = (n_long%10) + '0';
  n_long /=10;
  }

### ft_memchr.c

Return a string if we find the same character, until it's index is less than size n; Here the mainpoint is casting type. To access each string in the void argument, I have to cast the type to char, and then when it re returns the value should be casted again with void.

- First, we have to check whetehr the string is empty or not.
  If(!s)
  return NULL;
  while(i <n)
  {
  if(_(unsigned char_)(s+i) == (unsigned char)c)
  return ((void \*) (s+i));
  i++;
  }

### ft_memcmp.c

Return a poistive/negative/0 number regarding on the result between two string comparaison. Let's compare two strings also with type cast.

- This comparaison will happen up until size
  while(i <n)
  {
  if(_(unsigned char_)(s1+i) != _(unsigned char_)(s2+i))
  return (_(unsigned char_)(s1+i) - _(unsigned char _)(s2+i))
  i++;
  }
- Other wise return (0)
- Becase if s1 is bigger we should any kind of positive number, but if s1is smaller , we should return any negative number.
