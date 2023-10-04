/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegmore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:02:04 by diegmore          #+#    #+#             */
/*   Updated: 2023/10/04 14:02:57 by diegmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

/*
void	*ft_memchr(const void *str, int c, size_t n)
{
    size_t i;
    i = 0;
    const unsigned char *p;
    p = (const unsigned char *)str;

    while (*p++ && i++ < n)
	{
		if (*p == c)
			return ((void *)(p));
	}
	return (0);

}*/

void	*ft_memchr(const void *str, int c, size_t n)
{
    size_t i;
    i = 0;

    while (*(const unsigned char *)str++ && i++ < n)
	{
		if (*(const unsigned char *)str == c)
			return ((void *)(str));
	}
	return (0);

}

/*
int main () {
   const char str[] = "https://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;

   ret = ft_memchr(str, ch, strlen(str));

   printf("String after |%c| is - |%s|\n", ch, ret);

   return(0);
}
*/
