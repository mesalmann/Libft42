/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesalman <mesalman@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 17:28:13 by mesalman          #+#    #+#             */
/*   Updated: 2025/06/24 19:17:01 by mesalman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	s1len;

	start = 0;
	if (!s1 || !set)
		return (NULL);
	s1len = ft_strlen(s1);
	while (s1[start] && ft_set(s1[start], set))
		start++;
	while (s1len > start && ft_set(s1[s1len - 1], set))
		s1len--;
	return (ft_substr(s1, start, s1len - start));
}
