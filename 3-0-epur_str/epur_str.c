/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouekar <tlouekar@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 12:06:55 by tlouekar          #+#    #+#             */
/*   Updated: 2020/01/07 13:42:04 by tlouekar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_isspace(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

void	killspaces(char *str)
{
	int	len;
	int	i;

	i = 0;
	len = ft_strlen(str);
	while (ft_isspace(str[i]) == 1)
		i++;
	str += i;
	while(i < len)
	{
		if (ft_isspace(*str) != 1 || ft_isspace(*(str - 1)) != 1)
		{
			ft_putchar(*str);
		}
		else {
			while (ft_isspace(*(str + 1)) == 1)
			{
				str++;
				i++;
			}
		}
		str++;
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc != 2)
		write(1, "\n", 1);
	killspaces(argv[1]);
	return (0);
}