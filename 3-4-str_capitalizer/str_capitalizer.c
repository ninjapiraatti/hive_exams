/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouekar <tlouekar@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 15:58:31 by exam              #+#    #+#             */
/*   Updated: 2020/01/07 19:40:24 by tlouekar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_isspace(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

int		ft_islower(char c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

int		ft_isupper(char c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}

int		capitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		while (ft_isspace(str[i]) == 1)
		{
			write(1, &str[i], 1);
			i++;
		}
		if (ft_islower(str[i]) == 1 && str[i] != '\0')
		{
			str[i] -= 32;
			write(1, &str[i], 1);
			i++;
		}
		else if (ft_isupper(str[i]) == 1)
		{
			write(1, &str[i], 1);
			i++;
		}
		while (ft_isspace(str[i]) == 0 && str[i] != '\0')
		{
			if (ft_isupper(str[i]) == 1)
				str[i] += 32;
			write(1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

int		main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc < 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (i < argc)
	{
		capitalize(argv[i]);
		i++;
	}
	return (0);
}
