/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfaria-m <lfaria-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 12:00:51 by lfaria-m          #+#    #+#             */
/*   Updated: 2024/10/02 12:13:35 by lfaria-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memset(void *b, int c, size_t len)
{
	int		i;
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
