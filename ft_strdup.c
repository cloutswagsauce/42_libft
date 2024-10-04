/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfaria-m <lfaria-m@student.42lausanne.ch>    +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 16:38:35 by lfaria-m          #+#    #+#             */
/*   Updated: 2024/10/04 16:38:38 by lfaria-m         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*result;
	int		s_len;
	int		i;

	s_len = ft_strlen(s1);
	result = malloc(sizeof(char) * s_len + 1);
	if (!result)
		return (0);
	i = 0;
	while(i < s_len && s1[i])
	{
		result[i] = s1[i];
		i ++;
	}
	result[i] = '\0';
	return (result);
}

