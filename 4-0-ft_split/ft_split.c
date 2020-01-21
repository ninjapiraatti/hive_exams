/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouekar <tlouekar@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 10:17:46 by tlouekar          #+#    #+#             */
/*   Updated: 2020/01/21 12:55:18 by tlouekar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int			ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int			ft_isspace(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}
int			ft_wordcunt(char *str)
{
	int 	i;
	int		count;
	int		len;

	count = 0;
	len = ft_strlen(str);
	i = 0;
	while (i < len)
	{
		if (str[i] != ' ' && str[i] != '\t')
		{
			count++;
			while ((str[i] != ' ' && str[i] != '\t') && i < len)
				i++;
		}
		i++;
	}
	return (count);
}

char		**ft_split(char *str)
{
	char	**strings;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	strings = malloc(sizeof(char *) * ft_wordcunt(str) + 1);
	while (i < ft_wordcunt(str))
	{
		strings[i] = malloc(sizeof(char) * 65536); // This is horrible but would be ok in exam
		while (ft_isspace(str[k]) == 0 && str[k] != '\0')
		{
			strings[i][j] = str[k];
			j++;
			k++;
		}
		i++;
		j = 0;
		while (ft_isspace(str[k]) == 1 && str[k] != '\0')
		{
			k++;
			printf("%c", str[k]);
		}
	}
	return (strings);
}

int			main(int argc, char **argv)
{
	char	**split;
	split = ft_split(argv[1]);
	printf("%s\n", split[0]);
	printf("%s\n", split[1]);
	printf("%s\n", split[2]);
	return (0);
}