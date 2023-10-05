/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegmore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:13:22 by diegmore          #+#    #+#             */
/*   Updated: 2023/10/03 11:13:32 by diegmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, void *src, size_t n)
{
	void	*p_dest;

	p_dest = dest;
	while (n--)
	{
		*(unsigned char *)dest++ = *(unsigned char *)src++;
	}
	return (p_dest);
}
