/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 08:43:40 by sumaseko          #+#    #+#             */
/*   Updated: 2019/06/14 11:58:22 by sumaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s1)
{
	char	*str;
	size_t	m;

	m = 0;
	str = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (str == NULL)
		return (NULL);
	while (s1[m])
	{
		str[m] = s1[m];
		m++;
	}
	str[m] = '\0';
	return (str);
}
