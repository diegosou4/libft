/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegmore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 09:59:24 by diegmore          #+#    #+#             */
/*   Updated: 2023/10/04 10:03:09 by diegmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;
	int	length_s;

	length_s = ft_strlen((char *)str);
	i = 0;
	while (i < length_s)
	{
		if (str[i] == (char)c)
			return ((char *)(str + i));
		i++;
	}
	if (c == 0)
		return ((char *)(str + length_s));
	return (NULL);
}
