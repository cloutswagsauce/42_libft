/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfaria-m <lfaria-m@student.42lausanne.ch>    +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 15:17:19 by lfaria-m          #+#    #+#             */
/*   Updated: 2024/10/04 15:18:49 by lfaria-m         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	i;

	//if (!dst || !src)
		//return (0);
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	i = 0;
	while (src[i] && (dst_len + i) < dstsize - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
