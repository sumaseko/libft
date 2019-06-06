/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 11:24:16 by sumaseko          #+#    #+#             */
/*   Updated: 2019/06/06 13:08:36 by sumaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*str;
	unsigned int	i;
	unsigned int	z;

	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ftstrlen(s2)) + 1);
	if (str == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[z] != '\0')
	{
		str[z] = s2[z];
		z++;
	}
	str[i + z] = '\0';
	return (str);
}
