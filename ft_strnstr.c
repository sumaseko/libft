/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 12:08:47 by sumaseko          #+#    #+#             */
/*   Updated: 2019/06/07 09:10:43 by sumaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	m;
	size_t	z;

	m = 0;
	z = 0;
	while (m < len && haystack != '\0')
	{
		while (m + z < len && haystack[m + z] == needle[m] && needle[z] != '\0')
			z++;
		if (needle[m == '\0'])
			return ((char *)haystack + m);
		m++;
	}
	return (NULL);
}
