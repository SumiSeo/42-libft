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

void	*ft_memcpy(void *destination, const void *source, size_t size)

{
	size_t	i;
	char	*casted_destination;
	char	*casted_source;

	casted_source = (char *) source;
	casted_destination = (char *)destination;
	i = 0;
	while (i < size)
	{
		casted_destination[i] = casted_source[i];
		i++;
	}
	return (casted_destination);
}

int main()
{
    char src[] = "Sumi is writing code here";
    char dest[256];
    size_t size = 4;

    printf("my function destination -> %p\n",ft_memcpy(dest,src,size));
    
}
