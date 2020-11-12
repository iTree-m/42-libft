/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichejra <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 14:59:29 by ichejra           #+#    #+#             */
/*   Updated: 2019/10/29 13:11:34 by ichejra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	len1;
	size_t	len2;
	char	*s;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (!(s = (char *)malloc(sizeof(char) * (len1 + len2 + 1))))
		return (NULL);
	while (i < len1)
	{
		s[i] = s1[i];
		i++;
	}
	while (i - len1 < len2)
	{
		s[i] = s2[i - len1];
		i++;
	}
	s[i] = '\0';
	return (s);
}
