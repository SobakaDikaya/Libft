/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srafe <srafe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 14:52:44 by srafe             #+#    #+#             */
/*   Updated: 2018/11/26 15:02:08 by srafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

void				*ft_memset(void *buf, int ch, size_t count)
{
	unsigned char	*p;
	int				i;

	i = 0;
	p = (unsigned char *)buf;
	while (i < (int)count)
	{
		p[i] = (unsigned char)ch;
		i++;
	}
	return (buf);
}
