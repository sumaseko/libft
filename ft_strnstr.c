/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 12:08:47 by sumaseko          #+#    #+#             */
/*   Updated: 2019/06/11 11:10:11 by sumaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	m;
	size_t	z;

	m = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (m < len && haystack[m] != '\0')
	{
		z = 0;
		while (m + z < len && haystack[m + z] == needle[z] && needle[z] != '\0')
			z++;
		if (needle[z] == '\0')
			return ((char *)haystack + m);
		m++;
	}
	return (NULL);
}
