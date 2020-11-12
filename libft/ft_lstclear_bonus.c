/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichejra <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 22:21:41 by ichejra           #+#    #+#             */
/*   Updated: 2019/10/29 13:38:13 by ichejra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*lst1;
	t_list	*lst2;

	if (lst == NULL || del == NULL)
		return ;
	lst1 = *lst;
	while (lst1 != NULL)
	{
		del(lst1->content);
		lst2 = lst1->next;
		free(lst1);
		lst1 = lst2;
	}
	*lst = NULL;
}
