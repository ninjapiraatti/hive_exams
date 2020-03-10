/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 14:01:41 by exam              #+#    #+#             */
/*   Updated: 2020/03/10 14:52:24 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int			isitspace(char c)
{
	if (c == '\t' || c == ' ')
		return (1);
	return (0);
}

void		rev_wstr(char *str)
{
	int		end;
	int		cur;
	int		skip;

	end = ft_strlen(str) - 1;
	cur = end;
	skip = end;
	while (skip >= 0)
	{
		cur = skip;
		end = skip;
		while (isitspace(str[skip]) == 0 && skip >= 0)
			skip--;
		cur = skip + 1;
		while (cur <= end)
		{
			write(1, &str[cur], 1);
			if ((isitspace(str[cur + 1]) == 1
				|| str[cur + 1] == '\0') && skip > 0)
				write(1, " ", 1);
			cur++;
		}
		skip--;
	}
}

int			main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	rev_wstr(argv[1]);
	write(1, "\n", 1);
}
