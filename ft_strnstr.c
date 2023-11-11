/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 17:46:57 by sumseo            #+#    #+#             */
/*   Updated: 2023/11/11 18:22:25 by sumseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	i = 0 ;

	while(i < len && big[i])
	{
		j = 0;
		while(little[j] != '\0')
		{
			if(little[j] == big[i])
			{
				printf("found little word %c\n", little[j]);
				printf("found big word %c\n", big[i]);
			}
			j++;
		}

		i++;
	}
	return "hi";

}

int	main()
{
	  const char *largestring = "Foo Bar Baz";
      const char *smallstring = "Bar";
      size_t size = 4;
	  printf("returned value -> %s\n", ft_strnstr(largestring, smallstring, size));

}
