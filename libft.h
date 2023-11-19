/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 10:15:08 by sumseo            #+#    #+#             */
/*   Updated: 2023/11/13 11:17:45 by sumseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stddef.h>

//return int 
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int ft_isprint(int c);
int ft_toupper(int c);
int	ft_tolower(int c);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
int	ft_atoi(const char *nbtr);



//return void

void	ft_bzero(void *s, size_t n);
void    ft_putchar_fd(char c, int fd);
void    ft_putstr_fd(char *s, int fd);
void    ft_putendl_fd(char*s, int fd);
void    ft_putnbr_fd(int n, int fd);
void    ft_striteri(char *s, void (*f)(unsigned int, char *));


//return void pointer
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void    *ft_memchr(const void *s, int c, size_t n);
void    *ft_calloc(size_t count, size_t size);


// return size_t
size_t  ft_strlen(const char *s);
size_t  ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);

//return string
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char    *ft_itoa(int n);
char    *ft_strdup(const char *s1);
char    *ft_strjoin(char const *s1, char const *s2);
char    *ft_strmapi(char const *s, char (*f)(unsigned int, char));
char    *ft_strtrim(char const *s1, char const *set);
char    *ft_substr(char const *s, unsigned int start, size_t len);


//return pointerof character
char **ft_split(char const *s, char c);

#endif
