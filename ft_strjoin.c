/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfaria-m <lfaria-m@student.42lausanne.ch>    +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:35:56 by lfaria-m          #+#    #+#             */
/*   Updated: 2024/10/08 09:35:59 by lfaria-m         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		i;

	result = malloc(sizeof(char) * ((ft_strlen(s1) + ft_strlen(s2)) + 1));
	if (!result)
		return (0);
	i = 0;
	while (*s1 || *s2)
	{
		if (*s1)
		{
			result[i] = *s1;
			s1++;
			i ++;
		}
		while (!*s1 && *s2)
		{
			result[i] = *s2;
			s2++;
			i ++;
		}
	}
	result[i] = '\0';
	return (result);
}
/*
#include <stdio.h>

int main(void)
{
	printf("%s", ft_strjoin("hello", "world"));
} */
