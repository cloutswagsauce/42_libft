/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfaria-m <lfaria-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 14:06:16 by lfaria-m          #+#    #+#             */
/*   Updated: 2024/10/02 15:15:53 by lfaria-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;

	i = 0;
	if (big[i] == '\0')
		return (big);
	while (big[i] && i < len)
	{
		j = 0;
		while ((big[i + j] == little[j]) && (little[j]))
			j++;
		if (big[j] == '\0')
			return (&big[i]);
	i++;
	}
	return (0);
}
