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
#include <stdio.h>
#include <string.h>
#include "ft_strlen.c"



size_t    ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t    l_src;
    size_t     l_dst;
    l_src = 0;
    l_dst = 0;
    l_dst = ft_strlen(dst); 
   
    while(src[l_src])
        l_src++;
    while(*dst)
        *dst++;
    if(size >= ((l_dst + l_src) + 1))
    {
        while(*src && size > 1 && size--)
            *dst++ = *src++;
            *dst = '\0';
    }
    return((l_dst + l_src));
   
}
/*

int main() {
    char destination[20] = "diego";
    const char *source = "sardinha";
    size_t size_of_destination = sizeof(destination);

    printf("Before ft_strlcat:\n");
    printf("Destination: %s\n", destination);

    // Call ft_strlcat to concatenate the source string to the destination
    size_t result = ft_strlcat(destination, source, 14);

    printf("After ft_strlcat:\n");
    printf("Concatenated string: %s\n", destination);
    printf("Length of concatenated string: %zu\n", result);

    

    return 0;
}
*/