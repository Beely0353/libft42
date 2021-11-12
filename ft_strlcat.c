/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baroun <baroun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 11:54:34 by baroun            #+#    #+#             */
/*   Updated: 2021/10/25 14:56:54 by baroun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = -1;
	while (++i < size && *dst)
		dst++;
	if (i == size)
		return (i + ft_strlen(src));
	j = -1;
	while (src[++j])
		if (j < size - i - 1)
			*dst++ = src[j];
	*dst = '\0';
	return (i + j);
}
