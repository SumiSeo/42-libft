/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 09:51:50 by sumseo            #+#    #+#             */
/*   Updated: 2023/11/16 09:54:54 by sumseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*casted_s ;
	size_t	i;
	size_t	total;

	i = 0;
	total = len;
	if (len < 1)
		return (NULL);
	casted_s = (char *) malloc(total * sizeof(char));
	while (i < total)
	{
		casted_s[i] = s[start + i];
		i++;
	}
	return (casted_s);
}
/*
int	main()
{
	char *nouvelle = "Cettechaine de caracterere";
	unsigned int	index;
	index = 2;
	size_t	length;
	length = 4;

	printf("my function test -> %s\n", ft_substr(nouvelle, index, length));
	printf("my function test ->%p\n", ft_substr(nouvelle, index, length));

}
*/
