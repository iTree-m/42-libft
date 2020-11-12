/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichejra <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 15:32:46 by ichejra           #+#    #+#             */
/*   Updated: 2019/10/29 12:51:38 by ichejra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_min(int n, int m)
{
	if (n < m)
		return (n);
	return (m);
}

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t d;
	size_t s;

	i = 0;
	if (dst == NULL || src == NULL)
		return (0);
	d = ft_strlen(dst);
	s = ft_strlen(src);
	if (!size)
		return (s);
	while (src[i] && d + i < size - 1)
	{
		dst[d + i] = src[i];
		i++;
	}
	dst[d + i] = '\0';
	return (ft_min(d, size) + s);
}
