/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfaria-m <lfaria-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:51:35 by lfaria-m          #+#    #+#             */
/*   Updated: 2024/10/03 14:04:32 by lfaria-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char	*dest;
	char	*source;

	source = (char *) src;
	dest = (char *) dst;
	while (n > 0)
	{
		*dest = *source;
		dest ++;
		source ++;
		n --;
	}
	return (dst);
}
