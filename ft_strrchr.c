/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 18:50:31 by sumseo            #+#    #+#             */
/*   Updated: 2023/11/10 19:22:34 by sumseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int	length;
	length = 0;
	while(s[length])
		length++;

	printf("found %d\n", length);	
	while(s[length]>0)
	{
		if(s[length] == c)
			printf("found %d\n", s[length]);	
		length--;
	}
	return ((char *)s);
}

int	main()
{
	char str[] = "Hello world";
	char c = 'o';

	printf("Returned value -> %s\n", strrchr(str,c));
	printf("Returned value -> %s\n", ft_strrchr(str,c));
	
}
