/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouekar <tlouekar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 14:19:12 by tlouekar          #+#    #+#             */
/*   Updated: 2019/08/01 14:30:54 by tlouekar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void is_power(int num)
{
    int is;

    is = 0;
    if (num < 2)
    {
        printf("0");
    }
    while (num > 1)
    {
        if (num % 2 == 0)
        {
            is = 1;
        }
        else
        {
            is = 0;
        }
        num /= 2;
    }
    printf("%d", is);
}

int main ()
{
    is_power(8);
}
