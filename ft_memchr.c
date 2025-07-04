/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesalman <mesalman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 18:55:53 by mesalman          #+#    #+#             */
/*   Updated: 2025/07/02 16:04:59 by mesalman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *b, int c, size_t len)
{
	const unsigned char	*d;
	size_t				i;

	d = (const unsigned char *)b;
	i = 0;
	while (i < len)
	{
		if (d[i] == (unsigned char)c)
			return ((void *)&d[i]);
		i++;
	}
	return (0);
}
