/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouekar <tlouekar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 13:27:17 by tlouekar          #+#    #+#             */
/*   Updated: 2019/07/25 13:59:39 by tlouekar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int argc, char **argv)
{
    int i;

    i = 0;
    if (argc != 2)
    {
        write(1, "\n", 1);
    }
    else
    {
        while (argv[1][i] != '\0')
        {
            if ((argv[1][i] >= 65) && (argv[1][i] <= 90))
                argv[1][i] = argv[1][i] + 32;
            else if ((argv[1][i] >= 97) && (argv[1][i] <= 123))
                argv[1][i] = argv[1][i] - 32;
            write(1, &argv[1][i], 1);
            i++;
        }
        write(1, "\n", 1);
    }
}
