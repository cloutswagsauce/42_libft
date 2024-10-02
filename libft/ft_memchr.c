/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfaria-m <lfaria-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 12:40:29 by lfaria-m          #+#    #+#             */
/*   Updated: 2024/10/02 16:08:14 by lfaria-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s1;
	unsigned char	a;

	s1 = (unsigned char *)s;
	a = (unsigned char) c;
	while (n > 0)
	{
		if (*s1 == a)
			return ((void *) s);
		s1 ++;
	}
	return (0);
}
