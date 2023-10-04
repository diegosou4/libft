/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegmore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:29:14 by diegmore          #+#    #+#             */
/*   Updated: 2023/10/04 13:58:29 by diegmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strlen.c"

char	*ft_strrchr(const char *str, int c)
{
	int	i;
	int	j;

	j = 0;
	i = ft_strlen((char *)str);
	while (j != i && *str++)
		j++;
	while (i != 0)
	{
		if (*--str == c)
			return ((char *)str);
		i--;
	}
	return (0);
}
