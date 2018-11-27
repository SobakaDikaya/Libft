/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srafe <srafe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 14:37:48 by srafe             #+#    #+#             */
/*   Updated: 2018/11/23 15:14:05 by srafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

char	*ft_strncat(char *dest, const char *append, size_t n)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (dest[i] != '\0')
		i++;
	while (append[j] != '\0' && j < (int)n)
	{
		dest[i + j] = append[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
