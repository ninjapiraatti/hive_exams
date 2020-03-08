/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouekar <tlouekar@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 14:40:43 by exam              #+#    #+#             */
/*   Updated: 2020/01/07 19:27:49 by tlouekar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_isspace(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

int		main(int argc, char **argv)
{
	int	i;
	int	len;

	len = 0;
	i = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[1][len] != '\0')
		len++;
	len--;
	while (ft_isspace(argv[1][len]) == 1)
		len--;
	while (ft_isspace(argv[1][len]) == 0 && argv[1][len] != '\0')
		len--;
	len += 1;
	while ((ft_isspace(argv[1][len]) == 0) && argv[1][len] != '\0')
	{
		write(1, &argv[1][len], 1);
		len++;
	}
	write(1, "\n", 1);
	return (0);
}
