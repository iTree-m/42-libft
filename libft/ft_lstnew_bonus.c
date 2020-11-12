/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichejra <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 17:50:37 by ichejra           #+#    #+#             */
/*   Updated: 2019/10/29 13:33:57 by ichejra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*cont1;

	cont1 = (t_list *)malloc(sizeof(t_list));
	if (cont1 == NULL)
		return (NULL);
	cont1->content = content;
	cont1->next = NULL;
	return (cont1);
}
