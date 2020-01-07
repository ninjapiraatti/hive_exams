/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouekar <tlouekar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 15:45:14 by tlouekar          #+#    #+#             */
/*   Updated: 2019/07/25 16:09:36 by tlouekar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void print_bits(unsigned char octet)
{
    while (octet) {
        if (octet & 1)
            printf("1");
        else
            printf("0");

        octet >>= 1;
    }
}

int main ()
{
    print_bits(90);
}
