/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichejra <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 12:14:33 by ichejra           #+#    #+#             */
/*   Updated: 2019/10/29 12:25:52 by ichejra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalpha(int c)
{
	unsigned int	c1;

	c1 = (unsigned int)c;
	if ((c1 >= 97 && c1 <= 122) || (c1 >= 65 && c1 <= 90))
		return (1);
	return (0);
}
