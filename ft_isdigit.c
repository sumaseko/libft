/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 16:33:51 by sumaseko          #+#    #+#             */
/*   Updated: 2019/05/29 15:19:29 by sumaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isdigit(int m)
{
	unsigned char m1;

	m1 = (unsigned char)m1;
	if (m >= '0' && m <= '9')
		return (1);
	else
		return (0);
}
