/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 09:28:41 by sumaseko          #+#    #+#             */
/*   Updated: 2019/05/30 12:40:57 by sumaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	s;
	size_t	m;

	s = 0;
	m = 0;
	while (dst[s] && s < dstsize)
		s++;
	while ((src[m]) && ((s + m + 1) < dstsize))
	{
		dst[s + m] = src[m];
		m++;
	}
	if (s != dstsize)
	{
		dst[s + m] = '\0';
		return (s + ft_strlen(src));
	}
}
