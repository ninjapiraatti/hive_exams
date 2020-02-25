/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moment.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 14:03:22 by exam              #+#    #+#             */
/*   Updated: 2020/02/25 16:07:30 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char				*mrev(char *str)
{
	int				i;
	int				len;
	char			temp;

	i = 0;
	len = 0;
	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	i = 0;
	while (i < len - 1)
	{
		temp = str[len - i - 1];
		str[len - i - 1] = str[i];
		str[i] = temp;
		i++;
	}
	str[len + 1] = '\0';
	return (str);
}

char				*mitoa(unsigned int nbr)
{
	unsigned int	i;
	char			*str;

	i = 0;
	if (!(str = malloc(sizeof(char) * 100)))
		return (0);
	if (nbr == 0)
	{
		str[i] = '0';
		return (str);
	}
	while (nbr > 0)
	{
		str[i] = nbr % 10 + '0';
		nbr /= 10;
		i++;
	}
	str[i] = '\0';
	return (mrev(str));
}

char				*seconds(unsigned int duration)
{
	unsigned int	res;
	char			*str;
	char			*word;
	int				i;
	int				j;

	j = 0;
	i = 0;
	if (!(str = malloc(sizeof(char) * 30)))
		return (0);
	if (!(word = malloc(sizeof(char) * 30)))
		return (0);
	if (duration == 0)
	{
		res = 0;
		word = " seconds ago.\0";
	}
	else if (duration / 2592000 >= 1)
	{
		res = duration / 2592000;
		if (res == 1)
			word = " month ago.\0";
		else
			word = " months ago.\0";
	}
	else if (duration / 86400 >= 1)
	{
		res = duration / 86400;
		if (res == 1)
			word = " day ago.\0";
		else
			word = " days ago.\0";
	}
	else if (duration / 3600 >= 1)
	{
		res = duration / 3600;
		if (res == 1)
			word = " hour ago.\0";
		else
			word = " hours ago.\0";
	}
	else if (duration / 60 >= 1)
	{
		res = duration / 60;
		if (res == 1)
			word = " minute ago.\0";
		else
			word = " minutes ago.\0";
	}
	else
	{
		res = duration;
		if (res == 1)
			word = " second ago.\0";
		else
			word = " seconds ago.\0";
	}
	str = mitoa(res);
	while (str[i] != '\0')
		i++;
	while (word[j] != '\0')
	{
		str[i] = word[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}

char				*moment(unsigned int duration)
{
	return (seconds(duration));
}
