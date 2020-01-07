/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouekar <tlouekar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 14:29:19 by tlouekar          #+#    #+#             */
/*   Updated: 2019/07/25 14:59:49 by tlouekar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <unistd.h>

int main (int argc, char **argv)
{

    int i;
    int j;
    int len;

    i = 0;
    len = 0;
    if (argc == 3)
    {
        j = 0;
        while (argv[2][i] != '\0')
        {
            if (argv[2][i] == argv[1][j])
            {
                len++;
                j++;
            }
            i++;
        }
        i = 0;
        while (argv[1][i] != '\0')
            i++;
        if (i == len)
        {
            i = 0;
            while (argv[1][i] != '\0')
            {
                write(1, &argv[1][i], 1);
                i++;
            }
        }
    }
    else
        write (1, "\n", 1);
}
