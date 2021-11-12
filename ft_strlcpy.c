/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baroun <baroun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 11:53:31 by baroun            #+#    #+#             */
/*   Updated: 2021/10/22 15:19:55 by baroun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	j;

	i = ft_strlen(src);
	if (i + 1 < dstsize)
	{
		j = -1;
		while (++j < i + 1)
			dst[j] = src[j];
	}
	else if (dstsize)
	{
		j = -1;
		while (++j < dstsize - 1)
			dst[j] = src[j];
		dst[j] = '\0';
	}
	return ((size_t)i);
}
