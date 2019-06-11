/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 10:39:34 by sumaseko          #+#    #+#             */
/*   Updated: 2019/06/11 16:27:06 by sumaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	size_t	m;

	if (!(str = ft_memalloc(size + 1)))
		return (NULL);
	m = 0;
	while (size > m)
		str[m++] = '\0';
	return (str);
}
