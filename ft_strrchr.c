/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 18:50:31 by sumseo            #+#    #+#             */
/*   Updated: 2023/11/11 16:08:48 by sumseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*i;

	while (*s)
	{
		if (*s == c)
			i = (char *)s;
		s++;
	}
	return ((char *) i);
}

int	main()
{
	char str[] = "sumi seo";
	char c = 's';

	printf("Returned value -> %s\n", strrchr(str,c));
	printf("Returned value -> %s\n", ft_strrchr(str,c));
	
}
