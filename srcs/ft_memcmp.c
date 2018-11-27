/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srafe <srafe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 17:09:00 by srafe             #+#    #+#             */
/*   Updated: 2018/11/26 18:19:52 by srafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

int						ft_memcmp(const void *arr1, const void *arr2, size_t n)
{
	const unsigned char	*buf1;
	const unsigned char	*buf2;
	size_t				i;

	i = 0;
	buf1 = (unsigned char*)arr1;
	buf2 = (unsigned char*)arr2;
	while (i < n)
	{
		if (buf1[i] != buf2[i])
			return (buf1[i] - buf2[i]);
		i++;
	}
	return (0);
}
