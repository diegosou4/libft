/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegmore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:46:47 by diegmore          #+#    #+#             */
/*   Updated: 2023/10/05 12:47:18 by diegmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
#include <stdlib.h>
#include <unistd.h>

int						ft_isalpha(int c);
int						ft_isdigit(int c);
int						ft_isalnum(char c);
int						ft_isascii(int c);
int						ft_isprint(int c);
int						ft_strlen(char *str);
void					*ft_memset(void *s, int c, size_t size);
void					*ft_bzero(void *s, size_t n);
void					*ft_memcpy(void *dest, void *src, size_t n);
void					*ft_memmove(void *dest, const void *src, size_t n);
size_t					ft_strlcpy(char *dest, const char *src, size_t dstsize);
size_t					ft_strlcat(char *dst, const char *src, size_t size);
int						ft_toupper(int c);
int						ft_tolower(int c);
char					*ft_strchr(const char *str, int c);
char					*ft_strrchr(const char *str, int c);
int						ft_strncmp(char *s1, char *s2, unsigned int n);
void					*ft_memchr(const void *str, int c, size_t n);
int						ft_memcmp(const void *str1, const void *str2, size_t n);
char					*ft_strnstr(const char *big, const char *little,
							size_t len);
int						ft_atoi(const char *str);


#endif
