/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:56:31 by sumseo            #+#    #+#             */
/*   Updated: 2023/11/08 16:11:27 by sumseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	int	i;

	i = 0;
	if ((int) size < 0)
	{
		return (0);
	}
	while (i < (int) size)
	{
		dest[i] = src[i];
		i++;
	}
	return (i);
}

int	main()
{
	char	source[] = "Sumi is writing code";
	char	dest[] = "What are you doing";
	size_t	size = 4;

	ft_strlcpy(dest,source,size);
}
