/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 11:47:03 by sumaseko          #+#    #+#             */
/*   Updated: 2019/06/07 09:07:16 by sumaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
