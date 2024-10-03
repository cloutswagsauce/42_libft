/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfaria-m <lfaria-m@student.42lausanne.ch>    +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 22:25:13 by lfaria-m          #+#    #+#             */
/*   Updated: 2024/10/02 22:25:19 by lfaria-m         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = (char *) b;
	while (i < len)
	{
		*ptr = (unsigned char) c;
		i ++;
		ptr ++;
	}
	return (b);
}
