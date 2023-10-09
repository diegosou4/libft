/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diemorei <diemorei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:01:46 by diegmore          #+#    #+#             */
/*   Updated: 2023/10/09 10:14:16 by diegmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	l_src;
	size_t	l_dst;

	l_src = ft_strlen((char *)src);
	l_dst = ft_strlen(dst);
	if (l_dst >= size)
		return (size + l_src);
	while (*dst)
		dst++;
	if (size >= ((l_dst + l_src) + 1))
	{
		while (*src && size > 1 && size--)
			*dst++ = *src++;
		*dst = '\0';
	}
	return ((l_dst + l_src));
}

