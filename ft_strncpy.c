/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 11:26:16 by sumaseko          #+#    #+#             */
/*   Updated: 2019/05/29 11:45:40 by sumaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t m;

	m = 0;
	while (src[m] && m < len)
	{
		dst[m] = src[m];
		m++;
	}
	while (m < len)
	{
		dst[m] = '\0';
		m++;
	}
	return (dst);
}
