/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichejra <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 22:40:22 by ichejra           #+#    #+#             */
/*   Updated: 2019/10/29 13:41:53 by ichejra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst1;
	t_list	*new;

	if (lst == NULL || f == NULL)
		return (NULL);
	lst1 = NULL;
	new = NULL;
	while (lst != NULL)
	{
		new = ft_lstnew(f(lst->content));
		if (new == NULL)
		{
			ft_lstclear(&lst1, del);
			return (NULL);
		}
		ft_lstadd_back(&lst1, new);
		lst = lst->next;
	}
	return (lst1);
}
