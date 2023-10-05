/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegmore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 10:35:50 by diegmore          #+#    #+#             */
/*   Updated: 2023/10/03 10:43:59 by diegmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	void	*p_s;
	char	b;

	p_s = s;
	b = 0;
	while (n--)
		*(unsigned char *)s++ = (unsigned char *)b;
	return (p_s);
}
