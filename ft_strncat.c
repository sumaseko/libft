/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 14:32:44 by sumaseko          #+#    #+#             */
/*   Updated: 2019/05/29 14:57:50 by sumaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	int i;
	int m;

	i = 0;
	m = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[m] != '\0' && m < n)
	{
		s1[i + m] = s2[m];
		m++;
	}
	s1[i + m] = '\0';
	return (s1);
}
