/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srafe <srafe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 13:07:46 by srafe             #+#    #+#             */
/*   Updated: 2018/11/27 16:03:16 by srafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	unsigned int i;

	i = 0;
	while (str1[i] != '\0' && str2[i] != '\0' && n)
	{
		if (str1[i] == str2[i])
			i++;
		else
			break ;
		n--;
	}
	return ((const unsigned char)str1[i] - (const unsigned char)str2[i]);
}
