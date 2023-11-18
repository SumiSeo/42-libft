/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 11:20:56 by sumseo            #+#    #+#             */
/*   Updated: 2023/11/18 12:55:14 by sumseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static int	count_length(int n)
{
	int	total;

	total = 0;
	if (n < 0)
	{
		n *= -1;
		total++;
	}
	while (n > 0)
	{
		total++;
		n = n / 10;
	}
	return (total);
}

char	*ft_itoa(int n)
{
	int		count;
	long	n_long;
	char	*dest;
	int		i;

	count = 0;
	i = 0;
	n_long = n;
	count = count_length(n);
	dest = (char *) malloc (sizeof (char) * (count + 1));
	if (n_long < 0)
	{
		dest[0] = '-';
		n_long *= -1;
		i++;
	}
	while (count > i)
	{
		count--;
		dest[count] = (n_long % 10) + '0';
		n_long /= 10;
	}
	return (dest);
}

int	main()
{
	int	number = -3;
	printf("returned value %s\n", ft_itoa(number));
}
