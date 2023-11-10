/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:16:04 by sumseo            #+#    #+#             */
/*   Updated: 2023/11/10 09:35:08 by sumseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <ctype.h>

int	ft_isalpha(int character)
{
	if ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z'))
		return (1024);
	else
		return (0);
}

int main(){
    int num = '3';
    printf("original funcion ->%d\n:",isalpha(num));
    printf("my function -> %d\n", ft_isalpha(num));
}
