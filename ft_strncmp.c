/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 16:10:49 by sumseo            #+#    #+#             */
/*   Updated: 2023/11/11 17:46:03 by sumseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	value;
	size_t	i;

	value = 0;
	i = 0;
	while (*s1 && *s2 && i < n)
	{
		if (*s1 == *s2)
			value = 0;
		else if (*s1 > *s2)
			value = *s1 - *s2; 
		else
			value = *s1 - *s2;
		s1++;
		s2++;
		i++;
		
	}
	return (value);

}

int	main()
{
	char *s1 = "Sumi is programming";
	char *s2 = "Si is at 42";
	size_t n = 7;

	printf("What is the answer -> %d\n", strncmp(s1, s2, n));
	printf("What is the answer -> %d\n", ft_strncmp(s1, s2, n));

}
