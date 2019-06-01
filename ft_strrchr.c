/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 13:45:31 by sumaseko          #+#    #+#             */
/*   Updated: 2019/05/30 16:46:27 by sumaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int	m;

	m = strlen(s);
	if (c == 0)
		return ((char *)s);
	while (*s != '\0')
	{
		if (*s == c)
		{
			return ((char *)s + m);
		}
		s++;
	}
	return (NULL);
}
