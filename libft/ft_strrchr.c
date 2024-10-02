/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfaria-m <lfaria-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:36:45 by lfaria-m          #+#    #+#             */
/*   Updated: 2024/10/02 12:13:20 by lfaria-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrchr(char *str, char c)
{
	int	i;

	i = ft_strlen(str);
	if (c == '\0')
		return (str + i);
	i --;
	while (i >= 0)
	{
		if (str[i] == c)
			return (str + i);
		i --;
	}
	return (0);
}
