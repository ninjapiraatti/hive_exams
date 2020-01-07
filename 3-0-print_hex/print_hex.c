/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouekar <tlouekar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 09:17:58 by tlouekar          #+#    #+#             */
/*   Updated: 2019/07/26 11:29:05 by tlouekar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int hex_atoi (char *str)
{
    int i;
    int sign;
    int result;

    i = 0;
    result = 0;
    while ((str[i] == ' ') || (str[i] == '\t') ||
	(str[i] == '\n') || (str[i] == '\v') ||
	(str[i] == '\r') || (str[i] == '\f'))
        i++;
    if (str[i] == '-')
        sign = -1;
    if (str[i] == '-' || str[i] == '+')
        i++;
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + str[i] - '0';
        i++;
    }
    if (sign == -1)
        return (result * -1);
    else
        return (result);
}



int main (int argc, char **argv)
{
    int power;
    int number;
    int compare;
    int modulo;

    power =  1;
    compare = 16;
    if (argc == 2)
    {
        number = hex_atoi(argv[1]);
        printf("%d\n", number);
        while (number > compare)
        {
            modulo = number % compare;
            printf("Modulo of the number: %d", modulo);
            //tohex(number, compare, power);
            compare *= 16;
            power++;
        }
        printf("Compare: %d, Power: %d", compare, power);
    }
    else
        write(1, "\n", 1);
}
