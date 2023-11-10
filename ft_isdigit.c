/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:54:34 by sumseo            #+#    #+#             */
/*   Updated: 2023/11/10 09:38:13 by sumseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int character)
{
	if (character >= '0' && character <= '9')
		return (2048);
	return (0);
}

int main(){
    char test ='A';

    printf("original function -> %d\n", isdigit(test));
    printf("my function -> %d\n", ft_isdigit(test));
        
}
