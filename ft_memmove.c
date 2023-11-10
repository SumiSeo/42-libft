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

void	*ft_memmove(void *destination, const void *source, size_t size)
{
	size_t	i;
	char	*casted_destination;
	char	*casted_source;

	casted_source = (char *) source;
	casted_destination = (char *) destination;
	i = 0;
	while (i < size)
	{
		casted_destination[i] = casted_source[i];
		i++;
	}
	return (destination);
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
