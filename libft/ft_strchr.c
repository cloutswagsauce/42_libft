/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfaria-m <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 10:49:55 by lfaria-m          #+#    #+#             */
/*   Updated: 2024/10/01 11:21:44 by lfaria-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
static int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i ++;
	return (i);
}

char	*ft_strchr(char *str, char c)
{
	int	i;

	i = 0;
	if (c == '\0')
	{
		i = ft_strlen(str);
		return (str + i);
	}
	while (str[i])
	{
		if (str[i] == c)
			return (str + i);
		i ++;
	}
	return (0);
}
