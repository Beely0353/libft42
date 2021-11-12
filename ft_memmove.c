/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baroun <baroun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 14:59:27 by baroun            #+#    #+#             */
/*   Updated: 2021/10/25 15:00:02 by baroun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s;
	char	*d;

	d = (char *) dst;
	s = (char *) src;
	if (!dst || !src)
		return (NULL);
	if (d > s)
	{
		while (len--)
			*(d + len) = *(s + len);
		return (dst);
	}
	else
	{
		while (len--)
			*d++ = *s++;
	}
	return (dst);
}
