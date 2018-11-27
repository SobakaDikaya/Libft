/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srafe <srafe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 18:04:57 by srafe             #+#    #+#             */
/*   Updated: 2018/11/26 19:01:02 by srafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

char		*ft_strdup(char *str)
{
	char	*buf;
	int		i;

	i = ft_strlen(str) + 1;
	if ((buf = malloc(i)) == 0)
		return (0);
	ft_memcpy(buf, str, i);
	return (buf);
}
