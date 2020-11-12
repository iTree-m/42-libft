/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichejra <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 22:36:53 by ichejra           #+#    #+#             */
/*   Updated: 2019/10/29 13:38:49 by ichejra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*p;

	if (lst == NULL || f == NULL)
		return ;
	p = lst;
	while (p != NULL)
	{
		f(p->content);
		p = p->next;
	}
}
