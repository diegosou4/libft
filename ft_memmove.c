/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegmore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:57:20 by diegmore          #+#    #+#             */
/*   Updated: 2023/10/03 11:57:25 by diegmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*p_dest;

	p_dest = dest;
	if (dest > src)
	{
		while (n-- && *(unsigned char *)src != '\0')
		{
			*(unsigned char *)dest++ = *(unsigned char *)src++;
		}
		*(unsigned char *)dest = '\0';
	}
	else
	{
		while (n--)
			*(unsigned char *)dest++ = *(unsigned char *)src++;
	}
	return (p_dest);
}
