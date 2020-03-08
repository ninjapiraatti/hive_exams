/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 15:16:39 by exam              #+#    #+#             */
/*   Updated: 2020/01/07 15:54:57 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int		main(int argc, char **argv)
{
	int res;

	res = 0;
	if (argc != 4)
	{
		write(1, "\n", 1);
		return (0);
	}
	if (argv[2][0] == '+')
		res = atoi(argv[1]) + atoi(argv[3]);
	else if (argv[2][0] == '-')
		res = atoi(argv[1]) - atoi(argv[3]);
	else if (argv[2][0] == '*')
		res = atoi(argv[1]) * atoi(argv[3]);
	else if (argv[2][0] == '/')
		res = atoi(argv[1]) / atoi(argv[3]);
	else if (argv[2][0] == '%')
		res = atoi(argv[1]) % atoi(argv[3]);
	printf("%d\n", res);
	return (0);
}
