/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesalman <mesalman@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 18:47:58 by mesalman          #+#    #+#             */
/*   Updated: 2025/06/24 17:56:56 by mesalman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*s;

	s = (void *)malloc(nmemb * size);
	if (s == NULL)
		return (NULL);
	ft_bzero(s, size * nmemb);
	return (s);
}
