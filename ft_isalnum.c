/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfaria-m <lfaria-m@student.42lausanne.ch>    +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 18:15:52 by lfaria-m          #+#    #+#             */
/*   Updated: 2024/10/08 18:15:54 by lfaria-m         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 int	ft_isalnum(int c)
 {
	if(ft_isalpha((unsigned char)c) || ft_isdigit((unsigned char)c))
		return (1);
	return (0);
 }