/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:40:59 by sumseo            #+#    #+#             */
/*   Updated: 2023/11/08 14:43:44 by sumseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

char	*ft_memcpy(char *dest, char *src, size_t n)
{
	int	i;

	i = 0;
	while (i < (int) n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

int main()
{
    char src[] = "Sumi is writing code here";
    char dest[256];
    size_t size = 4;

    printf("my function destination -> %s\n",ft_memcpy(dest,src,size));
    
    
}
