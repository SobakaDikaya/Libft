/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srafe <srafe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 16:42:10 by srafe             #+#    #+#             */
/*   Updated: 2018/11/26 17:59:25 by srafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>  //Для printf
#include <string.h>   //Для memchr
#include "ft_libft.h"

void					*ft_memchr(const void *arr, int c, size_t n)
{
	const unsigned char	*buf;
	size_t				i;

	buf = (unsigned char	*)arr;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)buf[i] == (unsigned char)c)
			return ((void *)&arr[i]);
		i++;
	}
	return (NULL);
}
