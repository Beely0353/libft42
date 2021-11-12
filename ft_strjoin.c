/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baroun <baroun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:59:09 by baroun            #+#    #+#             */
/*   Updated: 2021/10/28 16:17:08 by baroun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	ls1;
	size_t	ls2;
	size_t	ltot;
	char	*dst;

	ls1 = ft_strlen((char *)s1);
	ls2 = ft_strlen(s2);
	ltot = ls1 + ls2 + 1;
	dst = malloc(sizeof(char) * ltot);
	if (!dst)
		return (NULL);
	ft_memmove(dst, s1, ls1);
	ft_memmove(dst + ls1, s2, ls2);
	dst[ltot - 1] = '\0';
	return (dst);
}
