/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegmore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:20:47 by diegmore          #+#    #+#             */
/*   Updated: 2023/10/04 16:21:06 by diegmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	j = 0;
	k = 0;
	i = 0;
	while (i < len)
	{
		while (*(char *)(big + j))
		{
			k = 0;
			while (*(char *)(big + (j + k)) == *(char *)(little + k))
				k++;
			if (*(char *)(little + k) == '\0')
			{
				return ((char *)(big + j));
			}
			j++;
		}
		i++;
	}
	return (0);
}
