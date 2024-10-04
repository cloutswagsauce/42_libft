/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfaria-m <lfaria-m@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:23:13 by lfaria-m          #+#    #+#             */
/*   Updated: 2024/10/04 14:23:13 by lfaria-m         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = 0;
	//if (!dst || !src)
		//return (0);
	while (src[src_len])
		src_len ++;
	if (!dstsize)
		return (src_len);
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i ++;
	}
	dst[i] = '\0';
	return (src_len);
}
