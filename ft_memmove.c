/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 10:06:41 by sumaseko          #+#    #+#             */
/*   Updated: 2019/06/14 15:42:31 by sumaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	l;
	char	*d;
	char	*s;

	l = 0;
	d = (char *)dst;
	s = (char *)src;
	if (src > dst)
		while (len > l)
		{
			d[l] = s[l];
			l++;
		}
	if (dst > src)
		while (len > 0)
		{
			d[len - 1] = s[len - 1];
			len--;
		}
	return (dst);
}
