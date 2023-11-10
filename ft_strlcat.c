/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:12:08 by sumseo            #+#    #+#             */
/*   Updated: 2023/11/10 18:13:48 by sumseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t length_dst;
	size_t i;
	size_t length_src;

	i = 0;
	length_dst = 0;
	length_src = 0;

	while (dst[length_dst] != '\0')
		length_dst++;
	while (src[length_src] != '\0')
		length_src++;
	
	if (size == 0)
		return (length_dst);
		
	while (*src && i < size)
	{
		if (i == size-1)
			dst[length_dst+i] = '\0';
		else 
			dst[length_dst+i] = src[i];
		i++;
	}
	printf("string %s\n<-", dst);
	return (length_dst + length_src);

}


int	main()
{
	char	destination[] = "This is ";
	char	source[] = "a potentially long string";
	size_t	size = 0;
	printf("Returned value %ld\n", ft_strlcat(destination, source, size));
}
