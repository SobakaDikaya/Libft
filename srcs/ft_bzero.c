/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srafe <srafe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 16:43:26 by srafe             #+#    #+#             */
/*   Updated: 2018/11/26 15:01:27 by srafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

void				*ft_bzero(void *buf, size_t count)
{
	unsigned char	*p;
	int				i;

	i = 0;
	p = (unsigned char *)buf;
	while (i < (int)count)
	{
		p[i] = '\0';
		i++;
	}
	return (buf);
}
