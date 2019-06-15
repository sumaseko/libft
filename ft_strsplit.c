/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 12:06:05 by sumaseko          #+#    #+#             */
/*   Updated: 2019/06/15 09:56:34 by sumaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordc(const char *s, char c)
{
	size_t	z;
	int		i;

	z = 0;
	i = 0;
	while (s[z])
	{
		while (s[z] == c)
			z++;
		if (s[z] != '\0')
			i++;
		while (s[z] && s[z] != c)
			z++;
	}
	return (i);
}

char		**ft_strsplit(const char *s, char c)
{
	int		i;
	int		n;
	int		p;
	char	**fstr;

	i = 0;
	p = 0;
	if (s == NULL)
		return (NULL);
	if (!(fstr = (char **)malloc(sizeof(char *) * (ft_wordc(s, c) + 1))))
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		n = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > n)
			fstr[p++] = ft_strsub(s, n, i - n);
	}
	fstr[p] = NULL;
	return (fstr);
}
