/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 10:44:45 by sumseo            #+#    #+#             */
/*   Updated: 2023/11/21 14:15:06 by sumseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	tmp = *lst;
	while (tmp->next != NULL)
	{
		del(tmp);
		printf("TEST : %s\n", (char *)tmp->content);
		tmp = tmp->next;
	}
	if (tmp->content != NULL)
		del(tmp);
}
/*
static void	del_func(void *p)
{
	printf("deleted %p\n", p);
}

int	main(void)
{
	t_list	l1;
	t_list	*l2;

	l2 = &l1;
	l1.content = "sumi";
	l1.next = ft_lstnew("seo");
	l1.next->next = ft_lstnew("korean");
	l1.next->next->next = ft_lstnew("korean2");
	ft_lstclear(&l2, del_func);
}
*/
