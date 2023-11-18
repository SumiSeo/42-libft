/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:40:59 by sumseo            #+#    #+#             */
/*   Updated: 2023/11/10 13:10:39 by sumseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)

{
	size_t	i;
	char	*casted_dest;
	char	*casted_src;

	casted_src = (char *) src;
	casted_dest = (char *)dest;
	i = 0;
	while (i < n)
	{
		casted_dest[i] = casted_src[i];
		i++;
	}
	return (casted_dest);
}

/*
int main()
{
    char src[] = "Sumi is writing code here";
    char dest[256];
    size_t size = 4;

    printf("my function destination -> %p\n",ft_memcpy(dest,src,size));
    
}
*/