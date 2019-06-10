/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:18:19 by sumaseko          #+#    #+#             */
/*   Updated: 2019/06/10 10:52:43 by sumaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	size_t	i;
	char	*s;

	i = 0;
	s = malloc(sizeof(char) * size);
	if (s != malloc(sizeof(char) * size))
	{
		return (NULL);
	}
	ft_bzero(s, size);
	return (s);
}
