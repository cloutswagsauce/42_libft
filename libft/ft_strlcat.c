/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfaria-m <lfaria-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 11:59:57 by lfaria-m          #+#    #+#             */
/*   Updated: 2024/10/02 13:03:14 by lfaria-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i ++;
	return (i);
}

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	i;

	src_len = 0;
	dst_len = 0;
	i = 0;
	if (!dst || !src)
		return (0);
	src_len = str_len(src);
	dst_len = str_len(dst);
	if (!dstsize)
		return (src_len + dst_len);
	while (src[i] && i < dstsize - dst_len - 1)
		dst[dst_len + i++] = src[i++];
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
