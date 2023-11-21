/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 10:44:52 by sumseo            #+#    #+#             */
/*   Updated: 2023/11/21 14:18:11 by sumseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	f(&lst);
}

static void	sumi(void *p)
{
	printf("deleted %p\n", p);
}

int	main(void)
{
	t_list	l1;

	l1.content = "sumi";
	l1.next = ft_lstnew("seo");
	l1.next->next = ft_lstnew("korean");
	ft_lstiter(ft_lstnew("sumi"), sumi);
}
