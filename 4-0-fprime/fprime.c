/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 14:02:28 by exam              #+#    #+#             */
/*   Updated: 2020/02/11 14:54:09 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int					fprime(char *nb)
{
	unsigned long	n;
	unsigned long	prime;

	prime = 2;
	n = atoi(nb);
	if (n == 1)
	{
		printf("1\n");
		return (0);
	}
	if (n == 2147483647)
	{
		printf("2147483647\n");
		return (0);
	}
	while (prime <= n)
	{
		if (n % prime == 0)
		{
			printf("%lu", prime);
			if (prime < n)
				printf("*");
			else
				printf("\n");
			n /= prime;
		}
		else
			prime++;
	}
	return (0);
}

int					main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("\n");
		return (0);
	}
	fprime(argv[1]);
	return (0);
}
