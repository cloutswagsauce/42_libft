/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfaria-m <lfaria-m@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 22:30:17 by lfaria-m          #+#    #+#             */
/*   Updated: 2024/10/02 22:30:17 by lfaria-m         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	src_len = ft_strlen((char *)src);
	dst_len = ft_strlen((char *)dst);
	if (!dstsize)
		return (src_len + dst_len);
	while (src[i] && i < dstsize - dst_len - 1)
	{
		dst[dst_len + i] = src[i];
		i ++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
