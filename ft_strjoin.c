/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegmore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:50:07 by diegmore          #+#    #+#             */
/*   Updated: 2023/10/05 13:50:08 by diegmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strcpy(char **strs, char *newArray, char *sep, int size)
{
	int	i;
	int	j;
	int	k;
	int	index;

	i = 0;
	index = 0;
	k = 0;
	while (k < size)
	{
		index = 0;
		while (strs[k][index])
			newArray[i++] = strs[k][index++];
		j = 0;
		if (k < size - 1)
		{
			while (sep[j])
				newArray[i++] = sep[j++];
		}
		k++;
	}
	newArray[i] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*newarray;
	int		sizematrix;
	int		sizesep;
	int		i;

	sizesep = 0;
	i = 0;
	sizematrix = 0;
	if (size == 0)
	{
		newarray = (char *)malloc(1);
		newarray[0] = '\0';
		return (newarray);
	}
	while (i < size)
	{
		sizematrix += ft_strlen(strs[i]);
		i++;
	}
	sizesep += ft_strlen(sep);
	sizesep *= (size - 1);
	newarray = (char *)malloc(sizematrix + sizesep + 1);
	ft_strcpy(strs, newarray, sep, size);
	return (newarray);
}
