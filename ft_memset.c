/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:20:29 by sumseo            #+#    #+#             */
/*   Updated: 2023/11/10 10:56:01 by sumseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

void	*ft_memset(void *pointer, int value, size_t count)
{
	size_t	i;
	char	*casted_pointer;

	casted_pointer = (char*) pointer;
	i = 0;
	while (i < count)
	{
		*casted_pointer = value;
		casted_pointer++;
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

