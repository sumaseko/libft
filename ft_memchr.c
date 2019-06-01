/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 11:47:03 by sumaseko          #+#    #+#             */
/*   Updated: 2019/06/01 12:47:11 by sumaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "llibft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*string;
	size_t	i;

	i = 0;
	string = (char *)s;
	while (i < n)
	{
		if ((unsigned char)string[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
