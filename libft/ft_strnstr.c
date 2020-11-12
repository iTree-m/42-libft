/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichejra <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 15:39:29 by ichejra           #+#    #+#             */
/*   Updated: 2019/10/29 12:58:41 by ichejra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	k = 0;
	if (haystack == NULL || needle == NULL)
		return (NULL);
	if (needle[k] == '\0')
		return ((char *)haystack);
	while (needle[k])
		k++;
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (needle[j] && i + j < len && haystack[i + j] == needle[j])
			j++;
		if (j == k)
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
