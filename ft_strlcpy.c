/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:56:31 by sumseo            #+#    #+#             */
/*   Updated: 2023/11/10 14:11:47 by sumseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	length;
	size_t	i;

	length = 0;
	i = 0;
	while (src[length] != '\0')
		length++;
	while (*dst && *src && i < size)
	{
		if (i == size - 1)
			dst[i] = '\0';
		else
			dst[i] = src[i];
		i++;
	}
	return (length);
}

/*
int	main()
{
	char	source[] = "Hello there, Venus";
	char	dest[100];
	size_t	size = 0;

	ft_strlcpy(dest,source,size);
}
*/