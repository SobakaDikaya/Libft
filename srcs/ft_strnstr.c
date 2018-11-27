/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srafe <srafe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 12:34:42 by srafe             #+#    #+#             */
/*   Updated: 2018/11/27 14:40:25 by srafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

char	*ft_strnstr(const char *src, const char *find, size_t n)
{
	size_t	i;
	size_t	j;

	if (find[0] == '\0')
		return ((char *)&src[0]);
	i = 0;
	j = 0;
	while (src[i] != '\0' && find[j] != '\0' && n--)
	{
		if (src[i] == find[j])
			j++;
		else
			j = 0;
		if (find[j] == '\0' && j != 0)
			return ((char *)&src[i - j + 1]);
		i++;
	}
	return (NULL);
}
