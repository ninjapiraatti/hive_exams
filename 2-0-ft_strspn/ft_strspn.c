/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 14:03:44 by exam              #+#    #+#             */
/*   Updated: 2020/01/07 14:36:32 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t		ft_strspn(const char *s, const char *accept)
{
	size_t	i;
	int		j;
	int		count;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				j = 0;
				count++;
				break ;
			}
			else
				j++;
		}
		i++;
	}
	return (count - 1);
}
