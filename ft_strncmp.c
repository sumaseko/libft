/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 10:29:24 by sumaseko          #+#    #+#             */
/*   Updated: 2019/05/28 14:27:01 by sumaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t m;

	m = 0;
	if (n == 0)
		return (0);
	while (s1[m] != '\0' && s1[m] == s2[m] && m < n - 1)
		m++;
	return ((unsigned char)s1[m] - (unsigned char)s2[m]);
}
