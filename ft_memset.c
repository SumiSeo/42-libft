/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:20:29 by sumseo            #+#    #+#             */
/*   Updated: 2023/11/10 11:20:06 by sumseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*casted_s;

	casted_s = (char *) s;
	i = 0;
	while (i < n)
	{
		*casted_s = c;
		casted_s++;
		i++;
	}
	return (casted_pointer);
}

int main()
{
    char str[] = "TEST is for Testing"; 
    char str2[] = "TEST is for Testing";
    memset(str, '@', 5);
    ft_memset(str2, '@', 5);
    printf("original function -> %s\n", str);
    printf("original function returning ->%p\n", memset(str, '@', 5));
    printf("my function -> %s\n",str2);
	printf("myfunction returning ->%p\n", ft_memset(str2, '@', 5));
}

