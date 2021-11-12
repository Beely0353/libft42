/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baroun <baroun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 12:24:39 by baroun            #+#    #+#             */
/*   Updated: 2021/10/25 14:57:47 by baroun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!haystack || !needle)
		return (NULL);
	if (!needle || !needle[0])
		return ((char *) haystack);
	while (haystack[i] && len > i)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && needle[j] && i + j < len)
		{
			j++;
		}
		if (!needle[j])
			return ((char *) haystack + i);
		i++;
	}
	return (NULL);
}
