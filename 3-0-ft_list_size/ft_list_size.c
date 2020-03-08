/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 14:39:23 by exam              #+#    #+#             */
/*   Updated: 2020/01/14 15:38:01 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

int			ft_list_size(t_list *begin_list)
{
	int		i;

	i = 0;
	while (begin_list != NULL)
	{
		i++;
		if (begin_list->next != NULL)
			begin_list = begin_list->next;
		else
			return (i);
	}
	return (i);
}
