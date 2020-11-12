/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichejra <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 15:42:05 by ichejra           #+#    #+#             */
/*   Updated: 2019/10/29 13:50:46 by ichejra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nbr(int n)
{
	int len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	int		len;
	int		l;
	char	*tab;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	l = nbr(n);
	len = nbr(n) + 1;
	if (!(tab = (char *)malloc(sizeof(char) * len)))
		return (NULL);
	if (n < 0)
	{
		tab[0] = '-';
		n *= -1;
	}
	while (n >= 10)
	{
		tab[len - 2] = n % 10 + '0';
		len--;
		n /= 10;
	}
	tab[len - 2] = n + '0';
	tab[l] = '\0';
	return (tab);
}
