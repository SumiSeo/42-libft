/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 09:49:31 by sumseo            #+#    #+#             */
/*   Updated: 2023/11/20 12:49:12 by sumseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_strdup(const char *s1)
{
	int		length;
	int		i;
	char	*casted_str;

	length = 0;
	i = 0;
	if(!s1)
		return NULL;
	while(s1[length])
		length++;
	casted_str = (char *)malloc(sizeof(char) * length + 1);	
	if(!casted_str)
		return (NULL);
	while(i < length)
	{
		casted_str[i] = s1[i];
		i++;
	}
	casted_str[i] = '\0';
	return (casted_str);
}

/*
int	main()
{
	char *str = "";

	printf("original function %s\n", strdup(str));
	printf("original function %p\n", strdup(str));
	printf("my function %s\n", ft_strdup(str));
	printf("my function %p\n", ft_strdup(str));
}
*/
