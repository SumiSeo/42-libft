/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 09:46:33 by sumseo            #+#    #+#             */
/*   Updated: 2023/11/16 09:47:59 by sumseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;

	ptr = malloc(sizeof(size) * count);
	return (ptr);
}

int	main()
{
	
	size_t num; 
	num = 4;
	size_t byte;
	byte = 4;
	printf("what is returned from original malloc %p\n", malloc(10));
	printf("what is returned from original calloc %p\n", ft_calloc(num, byte));



}

