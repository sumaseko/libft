/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 11:40:47 by sumaseko          #+#    #+#             */
/*   Updated: 2019/06/19 14:40:10 by sumaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int	m;

	m = 0;
	while (s1[m] != '\0' && s1[m] == s2[m])
		m++;
	if ((unsigned char)s1[m] - (unsigned char)s2[m] > 0)
		return (1);
	else if ((unsigned char)s1[m] - (unsigned char)s2[m] < 0)
		return (-1);
	else
		return (0);
}
