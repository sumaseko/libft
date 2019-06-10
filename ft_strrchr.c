/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 13:45:31 by sumaseko          #+#    #+#             */
/*   Updated: 2019/06/10 17:51:22 by sumaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*m;

	m = 0;
	while (*s)
	{
		if (*s == c)
		{
			m = (char *)s;
		}
		++s;
	}
	if (m)
		return (m);
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}
