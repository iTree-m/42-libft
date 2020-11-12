/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichejra <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 13:15:23 by ichejra           #+#    #+#             */
/*   Updated: 2019/10/29 12:35:07 by ichejra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		j;
	char	*s1;

	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	s1 = (char *)s;
	while (s1[i])
	{
		if (s1[i] == (char)c)
			j = i;
		i++;
	}
	if (s1[j] == (char)c)
		return (s1 + j);
	else if (s1[i] == (char)c)
		return (s1 + i);
	return (NULL);
}
