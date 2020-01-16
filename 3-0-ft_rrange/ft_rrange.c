/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 16:01:50 by exam              #+#    #+#             */
/*   Updated: 2019/11/26 16:53:30 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		get_len(int start, int end)
{
	int		len;

	if (start > end)
		len = start - end;
	else
		len = end - start;
	return (len + 1);
}

int		*ft_rrange(int start, int end)
{
	int		len;
	int		*ints;
	int		i;
	int		temp;

	len = get_len(start, end);
	i = len - 1;
	temp = end;
	ints = (int *)malloc(len * sizeof(int));
	if (len == 1)
	{
		ints[0] = 0;
		return (ints);
	}
	while (i >= 0)
	{
		ints[i] = temp;
		i--;
		if (start > end)
			temp++;
		else
			temp--;
	}
	return (ints);
}
