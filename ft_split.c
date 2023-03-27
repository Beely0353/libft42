/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 15:43:43 by baroun            #+#    #+#             */
/*   Updated: 2023/03/27 12:13:12 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	count_word(const char *str, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			j++;
			while (str[i] != c && str[i])
				i++;
			continue ;
		}
		i++;
	}
	return (j);
}

char	*setline(const char *str, int *i, char c)
{
	char	*r;
	int		j;

	j = *i;
	while (str[*i] != c && str[j])
		j++;
	r = malloc(sizeof(char) * (j - *i + 1));
	if (!r)
		return (NULL);
	j = 0;
	while (str[*i] != c && str[*i])
		r[j++] = str[(*i)++];
	r[j] = '\0';
	return (r);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**r;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	r = malloc(sizeof(char *) * count_word(s, c) + 1);
	if (!r)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			r[j++] = setline(s, &i, c);
			continue ;
		}
		i++;
	}
	r[j] = 0;
	return (r);
}
