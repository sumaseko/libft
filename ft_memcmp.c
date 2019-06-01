/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 12:47:22 by sumaseko          #+#    #+#             */
/*   Updated: 2019/06/01 14:11:51 by sumaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*str;
	char	*str1;
	size_t	i;

	str = (char *)s1;
	str1 = (char *)s2;
	i = 0;
	while (i < n)
	{
		if (str[i] != str1[i])
			return ((unsigned char)str[i] - (unsigned char)str1[i]);
		i++;
	}
	return (0);
}
