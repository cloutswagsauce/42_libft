/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfaria-m <lfaria-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 22:30:17 by lfaria-m          #+#    #+#             */
/*   Updated: 2024/10/03 17:46:53 by lfaria-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	i;

	if (!dst || !src)
		return (0);
	src_len = 0;
	dst_len = 0;
	i = 0;
	src_len = ft_strlen((char *)src);
	dst_len = ft_strlen((char *)dst);
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	while (dst_len + i < dstsize - 1)
	{
		dst[dst_len + i] = src[i];
		i ++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
