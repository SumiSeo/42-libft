/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:18:49 by sumseo            #+#    #+#             */
/*   Updated: 2023/11/10 10:03:19 by sumseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <ctype.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 127)
		return (16384);
	else
		return (0);
}
/*
int main()
{
    char word = ' ';
    printf("orignal function ->%d\n", isprint(word));
    printf("my function -> %d\n", ft_isprint(word));
}
*/