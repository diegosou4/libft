/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegmore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:01:46 by diegmore          #+#    #+#             */
/*   Updated: 2023/10/03 16:01:14 by diegmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	l_src;
	size_t	l_dst;
	size_t	temp;

	l_src = 0;
	l_dst = 0;
	l_dst = ft_strlen(dst);
	temp = l_dst;
	while (src[l_src])
		l_src++;
	while (*dst++)
		temp--;
	if (size >= ((l_dst + l_src) + 1))
	{
		while (*src && size > 1 && size--)
			*dst++ = *src++;
		*dst = '\0';
	}
	return ((l_dst + l_src));
}
