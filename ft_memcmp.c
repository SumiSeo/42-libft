/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 17:33:04 by sumseo            #+#    #+#             */
/*   Updated: 2023/11/11 17:44:41 by sumseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*casted_s1;
	char	*casted_s2;
	int		value;
	size_t	i;

	casted_s1 = (char *)s1;
	casted_s2 = (char *)s2;
	value = 0;
	i = 0;
	while (*casted_s1 && *casted_s2 && i < n)
	{
		if (*casted_s1 == *casted_s2)
			value = 0;
		else if (*casted_s1 > *casted_s2)
			value = *casted_s1 - *casted_s2;
		else
			value = *casted_s1 - *casted_s2;
		casted_s1++;
		casted_s2++;
		i++;
	}
	return (value);
}

int	main()
{
    char *s1 = "Simi is programming";
	char *s2 = "Su is at 42";
	size_t n = 2;

	printf("What is the answer -> %d\n", memcmp(s1, s2, n));
	printf("What is the answer -> %d\n", ft_memcmp(s1, s2, n));


}
