/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 10:44:39 by sumseo            #+#    #+#             */
/*   Updated: 2023/11/21 17:29:29 by sumseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	t_list *temp;

	if(lst == NULL || del ==NULL)
		return ;
	if(lst)
	{
		temp = lst->next;
		del(lst->content);
		free(lst);
		lst = temp;
	}
}

/*
static void	del_func(void *p)
{
	printf("deleted %p\n",p);
}

int	main(void)
{
	t_list	l1;

	l1.content ="sumi";
	l1.next= ft_lstnew("seo");
	l1.next->next = ft_lstnew("korean");
	ft_lstdelone(ft_lstnew("sumi"), del_func);
}
*/
