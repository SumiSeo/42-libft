/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 16:37:42 by sumseo            #+#    #+#             */
/*   Updated: 2023/11/11 17:32:16 by sumseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*casted_string;

	casted_string = (char *) s;
	i = 0;
	while (*casted_string)
	{
		if (i < n)
		{
			if (*casted_string == c)
				break ;
			casted_string++;
		}
		else
			return (NULL);
		i++;
	}
	return ((char *) casted_string);
}

int	main()
{
	char *a = "Hello world how are you ?";
	char word = 'w';
	const unsigned int size = 50;
	printf("The returnedd value %p\n", memchr(a, word, size));
	char *pt = memchr(a, word, size);
	printf("answer -> %s\n",pt);
	printf("The returnedd value %p\n", ft_memchr(a, word, size));
	char *ptr = ft_memchr(a, word, size);
	printf("answer -> %s\n",ptr);
}
