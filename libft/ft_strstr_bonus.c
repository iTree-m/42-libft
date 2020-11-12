/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichejra <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 12:20:13 by ichejra           #+#    #+#             */
/*   Updated: 2019/10/27 18:38:09 by ichejra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;
	int len;

	len = 0;
	if (haystack == NULL || needle == NULL)
		return (NULL);
	if (needle[len] == '\0')
		return ((char *)haystack);
	while (needle[len])
		len++;
	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (haystack[i + j] && needle[j] && haystack[i + j] == needle[j])
			j++;
		if (j == len)
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
