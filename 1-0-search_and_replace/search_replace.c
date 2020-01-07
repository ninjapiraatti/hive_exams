/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_replace.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouekar <tlouekar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 14:20:05 by tlouekar          #+#    #+#             */
/*   Updated: 2019/07/25 14:20:32 by tlouekar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int argc, char **argv)
{

    int i;
    char needle;
    char replacement;

    needle = argv[2][0];
    replacement = argv[3][0];

    i = 0;
    if (argc == 4)
    {
        while (argv[1][i] != '\0')
        {
            if (argv[1][i] == needle)
                write(1, &replacement, 1);
            else
                write(1, &argv[1][i], 1);
            i++;
        }
    }
    else
        write (1, "\n", 1);
}
