/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegmore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:38:09 by diegmore          #+#    #+#             */
/*   Updated: 2023/10/04 16:04:25 by diegmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	int	i;

	i = 0;
	while ((i < n - 1) && (*(const unsigned char *)str1++ != '\0'
			&& *(const unsigned char *)str2++ != '\0')
		&& (*(const unsigned char *)str1 == *(const unsigned char *)str2))
	{
		i++;
	}
	return ((*(const unsigned char *)str1 - *(const unsigned char *)str2));
}
