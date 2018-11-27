/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srafe <srafe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 17:23:35 by srafe             #+#    #+#             */
/*   Updated: 2018/11/27 13:31:17 by srafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

char		*ft_strrchr(const char *str, int ch)
{
	char	*s;
	int		len;
	int		k;

	len = 0;
	k = -1;
	s = (char *)str;
	while (str[len] != '\0')
	{
		if (s[len] == ch)
			k = len;
		len++;
	}
	if (s[len] == ch)
		k = len;
	if (k != -1)
		return (&s[k]);
	return (NULL);
}

