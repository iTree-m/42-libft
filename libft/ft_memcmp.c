/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichejra <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 09:41:20 by ichejra           #+#    #+#             */
/*   Updated: 2019/10/29 13:52:52 by ichejra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*tab1;
	unsigned char	*tab2;

	i = 0;
	if (!s1 || !s2 || !n)
		return (0);
	tab1 = (unsigned char *)s1;
	tab2 = (unsigned char *)s2;
	while (i < n)
	{
		if (tab1[i] != tab2[i])
			return ((int)tab1[i] - (int)tab2[i]);
		i++;
	}
	return (0);
}
