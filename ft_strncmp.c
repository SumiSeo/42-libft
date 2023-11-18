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
	// int	value;
	size_t	i;

	// value = 0;
	i = 0;
	while (s1[i]&& s2[i] && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i]- s2[i]);
		i++;
	}
	return (0);

}
/*
int	main()
{
	char *s1 = "Tripouille";
	char *s2 = "tripouille";
	size_t n = 7;

	printf("What is the answer -> %d\n", strncmp(s1, s2, n));
	printf("What is the answer -> %d\n", ft_strncmp(s1, s2, n));

}*/
