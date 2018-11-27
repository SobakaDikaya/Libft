/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libft.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srafe <srafe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 15:14:14 by srafe             #+#    #+#             */
/*   Updated: 2018/11/27 19:04:19 by srafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBFT_H
# define FT_LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdio.h>
# include <ctype.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

int					ft_atoi(const char *str);
void				*ft_bzero(void *buf, size_t count);
int					ft_isalnum(int a);
int					ft_isalpha(int a);
int					ft_isascii(int a);
int					ft_isdigit(int a);
int					ft_isprint(int a);
void				*ft_memccpy(void *dest, const void *src, int c, size_t n);
void				*ft_memchr(const void *arr, int c, size_t n);
int					ft_memcmp(const void *arr1, const void *arr2, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_memmove(void *dest, const void *source, size_t n);
void				*ft_memset(void *buf, int ch, size_t count);
char				*ft_strcat(char *dest, const char *append);
char				*ft_strchr(const char *str, int ch);
int					ft_strcmp(const char *str1, const char *str2);
char				*ft_strcpy(char *dest, const char *src);
char				*ft_strdup(char *str);
unsigned long		ft_strlcat(char *dest, char *src, unsigned long n);
int					ft_strlen(char *str);
char				*ft_strncat(char *dest, const char *append, size_t n);
int					ft_strncmp(const char *str1, const char *str2, size_t n);
char				*ft_strncpy(char *dest, const char *src, size_t n);
char				*ft_strnstr(const char *src1, const char *src2, size_t n);
char				*ft_strrchr(const char *str, int ch);
char				*ft_strstr(const char *src1, const char *src2);
int					ft_tolower(int a);
int					ft_toupper(int a);

#endif
