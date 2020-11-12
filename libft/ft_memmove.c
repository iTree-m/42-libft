/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichejra <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 19:19:59 by ichejra           #+#    #+#             */
/*   Updated: 2019/10/29 14:01:19 by ichejra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*source;

	i = 0;
	if (dst == NULL || src == NULL || len == 0)
		return (dst);
	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	if (source < dest && dest < source + len)
		while (i < len)
		{
			dest[len - i - 1] = source[len - i - 1];
			i++;
		}
	else
		while (i < len)
		{
			dest[i] = source[i];
			i++;
		}
	return (dst);
}
