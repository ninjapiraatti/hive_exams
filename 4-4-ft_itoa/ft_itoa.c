/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouekar <tlouekar@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 08:58:34 by tlouekar          #+#    #+#             */
/*   Updated: 2020/01/21 10:00:35 by tlouekar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int			ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char		*ft_strrev(char *str)
{
	char	temp;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(str) - 1;
	while (i <= (len / 2))
	{
		temp = str[i];
		str[i] = str[len - i];
		str[len - i] = temp;
		i++;
	}
	return (str);
}

char		*ft_itoa(int nbr)
{
	int		neg;
	char	*str;
	char	*result;
	int		i;
	int		j;

	neg = 0;
	i = 0;
	j = 0;
	str = malloc(sizeof(char) * 12);
	result = malloc(sizeof(char) * 12);
	if (nbr == -2147483648)
	{
		result = "-2147483648";
		return (result);
	}
	if (nbr < 0)
	{
		neg = 1;
		nbr *= -1;
	}
	while (nbr > 0)
	{
		str[i] = (nbr % 10) + '0';
		nbr = nbr / 10;
		i++;
	}
	str = ft_strrev(str);
	if (neg == 1)
	{
		result[0] = '-';
		i = 1;
	}
	else
		i = 0;
	while (str[j] != '\0')
	{
		result[i] = str[j];
		i++;
		j++;
	}
	printf("%s", result);
	return (result);
}

int			main(void)
{
	ft_itoa(-96820);
	return (0);
}