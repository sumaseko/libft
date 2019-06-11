/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 14:29:16 by sumaseko          #+#    #+#             */
/*   Updated: 2019/06/11 10:31:04 by sumaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *haystack, const char *needle)
{
	unsigned int m;
	unsigned int z;

	m = 0;
	if (haystack[0] == '\0' && needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[m])
	{
		z = 0;
		while (needle[z] != '\0' && haystack[m + z] == needle[z])
			z++;
		if (needle[z] == '\0')
			return ((char *)haystack + m);
		m++;
	}
	return (NULL);
}
