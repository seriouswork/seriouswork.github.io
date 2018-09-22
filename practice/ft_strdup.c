/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zli <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 11:22:00 by zli               #+#    #+#             */
/*   Updated: 2018/09/22 11:52:48 by zli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	int i;
	char *str;
	int len;

	while (s1[i] != '\0')
	{
		i++;
	}
	len = i;
	str = (char*)malloc(sizeof(*str));

	i = 0;
	while (i < len)
	{
		str[i] = s1[i];
		i++;
	}
	return (str);
}

