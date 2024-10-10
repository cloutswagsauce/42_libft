/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfaria-m <lfaria-m@student.42lausanne.ch>    +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 09:34:23 by lfaria-m          #+#    #+#             */
/*   Updated: 2024/10/10 11:20:35 by lfaria-m         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list *new_node;

	new_node = (t_list *) malloc(sizeof(char) * ft_strlen(content) + 1);
	if (!new_node)
		return (0);
	new_node -> content = content;
	new_node -> next = 0;
	return (new_node);
}