/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:40:24 by sumseo            #+#    #+#             */
/*   Updated: 2023/11/08 14:10:47 by sumseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_memmove(char *dest, char *src, size_t size)
{
	int	i;

	i = 0;
	while (i < (int) size)
	{
		dest[i] = src[i];
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
