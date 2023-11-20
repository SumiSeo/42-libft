/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 09:24:18 by sumseo            #+#    #+#             */
/*   Updated: 2023/11/20 11:20:32 by sumseo           ###   ########.fr       */
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
	while ((nbtr[i] >= 9 && nbtr[i] <= 13) || nbtr[i] == 32)
		i++;
	if (nbtr[i] == '-' || nbtr[i] == '+')
	{
		if (nbtr[i] == '-')	
			sign *= -1;
		i++;
	}
	if (nbtr[i] >= '0' && nbtr[i] <= '9')
		nb = (nb * 10) + (nbtr[i] - '0');
	i++;
	return (sign * nb);
}
/*
int	main()
{
	char	*str = "590310";
	printf("original function ->%d\n",atoi(str));
	printf("my function ->%d\n",ft_atoi(str));

}*/
