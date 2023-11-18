/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 18:28:03 by sumseo            #+#    #+#             */
/*   Updated: 2023/11/10 18:46:15 by sumseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			break ;
		s++;
	}
	return ((char *) s);
}

/*
int	main()
{
	char str[] = "hello world";
	char character = 'o';
	printf("returned character -> %s\n", strchr(str,character));
	printf("returned character -> %s\n", ft_strchr(str,character));

}
*/