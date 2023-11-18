/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 09:24:18 by sumseo            #+#    #+#             */
/*   Updated: 2023/11/13 10:12:44 by sumseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(const char *nbtr)
{
	int		i;
	long	nb;
	int		sign;

	sign = 1;
	i = 0;
	nb = 0;
	if (!nbtr)
		return (0);
	while (nbtr[i] != '\0')
	{
		if (nbtr[0] == '-')
			sign *= -1;
		if (nbtr[1] == '-' || nbtr[1] == '+')
			return (0);
		if (nbtr[i] >= '0' && nbtr[i] <= '9')
			nb = (nb * 10) + (nbtr[i] - '0');
		i++;
	}
	return (sign * nb);
}
/*
int	main()
{
	char	*str = "590310";
	printf("original function ->%d\n",atoi(str));
	printf("my function ->%d\n",ft_atoi(str));

}*/
