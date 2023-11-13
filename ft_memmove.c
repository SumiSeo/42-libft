/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:40:24 by sumseo            #+#    #+#             */
/*   Updated: 2023/11/10 13:15:20 by sumseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*casted_dest;
	char	*casted_src;

	casted_src = (char *) src;
	casted_dest = (char *) dest;
	i = 0;
	while (i < n)
	{
		casted_dest[i] = casted_src[i];
		i++;
	}
	return (dest);
}

int	main()
{

	char words[] = "sumi sumi sumi";
	char destination[256] = "yo yo yid";
	size_t size = 4;

	memmove(destination, words, size);
	printf("after source : %s\n", words);
	printf("after destination : %s\n",destination);
	ft_memmove(destination, words, size);
}
