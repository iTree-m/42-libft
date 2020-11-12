/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichejra <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 12:44:34 by ichejra           #+#    #+#             */
/*   Updated: 2019/10/29 13:15:44 by ichejra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		words(const char *str, char c)
{
	int i;
	int s;
	int cp;

	i = 0;
	s = 0;
	cp = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
		{
			s = 0;
			i++;
		}
		while (str[i] && str[i] != c)
		{
			if (s == 0)
			{
				s = 1;
				cp++;
			}
			i++;
		}
	}
	return (cp);
}

static int		ltr(const char *str, int i, char c)
{
	int cp;

	cp = 0;
	while (str[i] && str[i] != c)
	{
		cp++;
		i++;
	}
	return (cp);
}

static int		filltab(char *tab, const char *s, int start, char c)
{
	int	i;

	i = 0;
	while (s[start + i] && s[start + i] != c)
	{
		tab[i] = s[start + i];
		i++;
	}
	tab[i] = '\0';
	return (i);
}

static void		freetab(char **tab, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

char			**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s || !(tab = (char **)malloc(sizeof(char *) * (words(s, c) + 1))))
		return (NULL);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (!s[i])
			break ;
		if (!(tab[j] = (char *)malloc(sizeof(char) * (ltr(s, i, c) + 1))))
		{
			freetab(tab, j);
			return (NULL);
		}
		i += filltab(tab[j], s, i, c);
		j++;
	}
	tab[j] = 0;
	return (tab);
}
