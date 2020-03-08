/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 15:41:11 by exam              #+#    #+#             */
/*   Updated: 2020/01/14 16:11:16 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void				sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i;
	int				temp;
	int				did;

	i = 0;
	temp = 0;
	did = 1;
	while (did == 1)
	{
		did = 0;
		while (i < size - 1)
		{
			if (tab[i + 1] < tab[i])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
				i++;
				did = 1;
			}
			else
				i++;
		}
		i = 0;
	}
}
