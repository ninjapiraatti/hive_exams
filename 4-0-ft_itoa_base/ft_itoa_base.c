/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouekar <tlouekar@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 14:02:58 by exam              #+#    #+#             */
/*   Updated: 2020/01/21 16:36:04 by tlouekar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int			exponent(int base, int multi)
{
	int		mvalue;

	mvalue = 1;
	while (multi > 1)
	{
		mvalue *= base;
		multi--;
	}
	return (mvalue);
}

char		conversion(int convert)
{
	if (convert > 9)
		convert += 55;
	else
		convert += 48;
	return (convert);
}

char		*ft_itoa_base(int value, int base)
{
	int		i;
	int		multi;
	long	mvalue;
	int		convert;
	char	*str;

	i = 0;
	multi = 0;
	mvalue = 1;
	str = malloc(sizeof(char) * 64);
	if (base < 2 || base > 16)
		return (0);
	if (value < 0)
	{
		if (base == 10)
		{
			str[0] = '-';
			i = 1;
			value *= -1;
		}
		else
			value *= -1;
	}
	if (value == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	while ((long)value >= mvalue)
	{
		mvalue *= base;
		multi++;
	}
	while (multi > 0)
	{
		convert = value / exponent(base, multi);
		value = value % exponent(base, multi);
		str[i] = conversion(convert);
		multi--;
		i++;
	}
	str[i] = '\0';
	return (str);
}

int main (void)
{
	printf("%s",ft_itoa_base(2145483223, 10));
}
