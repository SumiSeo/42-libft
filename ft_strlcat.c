/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:12:08 by sumseo            #+#    #+#             */
/*   Updated: 2023/11/20 10:06:22 by sumseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	l_dst;
	size_t	l_src;
	size_t	i;

	i = 0;
	l_dst = ft_strlen(dst);
	l_src = ft_strlen(src);
	while (src[i] && l_dst + i + 1 < size)
	{
		dst[l_dst + i] = src[i];
		i++;
	}
	dst[l_dst + i] = '\0';
	if (l_dst > size)
	{
		return (l_src + size);
	}
	return (l_src + l_dst);
}
/*

int	main(void)
{
	char	destination[] = "This is ";
	char	source[] = "a potentially long string";
	size_t	size;

	size = 25;
	printf("Returned value %ld\n", ft_strlcat(destination, source, size));
}
*/
