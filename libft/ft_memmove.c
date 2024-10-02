/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfaria-m <lfaria-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:03:47 by lfaria-m          #+#    #+#             */
/*   Updated: 2024/10/02 11:59:34 by lfaria-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memmove(void *dst, const void *src, size_t len)
{
	char	*dest;
	char	*source;
	size_t	i;

	if (!dst || !src)
		return (0);
	dest = (char *)dst;
	source = (char *)src;
	i = 0;
	if (dst > src)
	{
		len --;
		while (len > 0 && source[len])
			dest[len--] = source[len--];
	}
	else
	{
		while (source[i] && i < len)
			dest[i++] = source[i++];
	}
	return (dst);
}
