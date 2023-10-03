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



size_t    ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t    s_src;
    size_t     s_dst;
    s_dst = 0;
    s_src = 0;
    while(dst[s_dst])
            s_dst++;
    while(*++dst &&  size > 0 && size--)
        s_src++;
    while(*src && size > 1 &&  size--)
    {
        *dst++ = *src++;
    }
    if(size == 1)
        *dst = '\0';
    return(s_src + s_dst );

}


int main() {
    char destination[20] = "Hello";
    const char *source = "Mundoods";
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
