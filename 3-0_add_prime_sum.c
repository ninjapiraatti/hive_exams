/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3-0_add_prime_sum.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouekar <tlouekar@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 10:46:03 by tlouekar          #+#    #+#             */
/*   Updated: 2020/01/07 10:46:07 by tlouekar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void    ft_putchar(char c)
{
  write(1, &c, 1);
}

void    ft_putposnbr(int n)
{
  if (n > 9)
    ft_putposnbr(n / 10);
  ft_putchar(n % 10 + '0');
}

int     ft_atoi_nc(char *s)
{
  int   number;

  number = 0;
  while(*s >= '0' && *s <= '9')
  {
    number = number * 10 + *s++ - '0';
  }
  return (number);
}

int     is_prime(int n)
{
  int   i;

  i = 2;
  printf("Number to check is: %d\n", n);
  while (i <= n)
  {
    if (n % i == 0 && n != i)
      return (0);
    i++;
  }
  return (1);
}

int     ft_add_prime_sum(int n)
{
  int   added;
  int   i;

  added = 0;
  i = 2;
  while (i <= n)
  {
    if (is_prime(i) == 1)
    { 
      added += i;
      printf("Added to prime: %d", i);
    }
    i++;
  }
  return (added);
}

int main (int argc, char **argv)
{
  int   number;

  number = 0;
  if (argc != 2)
    return 0;
  if (ft_atoi_nc(argv[1]) > 0)
  {
    number = ft_add_prime_sum(ft_atoi_nc(argv[1]));
    ft_putposnbr(number);
  }
  return (0);
}
