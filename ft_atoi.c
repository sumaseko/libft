/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 08:35:39 by sumaseko          #+#    #+#             */
/*   Updated: 2019/05/29 16:06:24 by sumaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_atoi(const char *str)
{
	long			res;
	long			sign;
	unsigned int	i;

	res = 0;
	sign = 1;
	i = 0;
	while (str[i] == '\v' || str[i] == '\n' || str[i] == ' ' || str[i] == '\t'
	|| str[i] == '\f' || str[i] == '\r')
	{
		i++;
		res = res * 10 + str[i] - '0';
	}
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	return ((int)(sign * res));
}
