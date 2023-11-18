/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 17:46:57 by sumseo            #+#    #+#             */
/*   Updated: 2023/11/13 09:22:43 by sumseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	int		j;

	i = 0 ;
	while (*big != '\0' && i < len)
	{
		j = 0;
		while (little[j] != '\0')
		{
			if (little[j] == big[i + j])
				return ((char *) big);
			j++;
			i++;
			big++;
		}
	}
	return (NULL);
}

/*
int	main()
{
	  char *largestring = "Hello world";
      char *smallstring = "lo";
      size_t size = 10;
	  printf("returned value -> %s\n", ft_strnstr(largestring, smallstring, size));

}
*/