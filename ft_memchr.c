/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 16:37:42 by sumseo            #+#    #+#             */
/*   Updated: 2023/11/19 18:43:01 by sumseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i; 

	i = 0;

	if(!s)
		return (NULL);
	while (i < n)
	{
		if (*(unsigned char*)(s+i) == (unsigned char)c)
			return ((void*)(s+i));
		i++;
	}
	return (NULL);
}

/*
int	main()
{
	char *a = "Hello world how are you ?";
	char word = 'w';
	const unsigned int size = 50;
	printf("original function %p\n", memchr(a, word, size));
	char *pt = memchr(a, word, size);
	printf("original function -> %s\n",pt);
	printf("my function %p\n", ft_memchr(a, word, size));
	char *ptr = ft_memchr(a, word, size);
	printf("my function -> %s\n",ptr);
}
*/
