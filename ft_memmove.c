/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 10:06:41 by sumaseko          #+#    #+#             */
/*   Updated: 2019/06/10 15:04:58 by sumaseko         ###   ########.fr       */
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
	
	while (0 < len)
	{
		d[l] = s[l];
		l++;
		len--;
	}
	return (dst);
}
