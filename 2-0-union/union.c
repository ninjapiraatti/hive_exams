/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouekar <tlouekar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 14:34:15 by tlouekar          #+#    #+#             */
/*   Updated: 2019/08/01 15:11:49 by tlouekar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int is_forbidden(char letter)
{
    int i;
    char forbiddenlist[90];

    i = 0;

    while (forbiddenlist[i] != '\0')
    {
        if (forbiddenlist[i] != letter)
        {
            forbiddenlist[i] = letter;
            return (1);
        }
        i++;
    }
    return (0);
}

int main(int argc, char **argv)
{
    int i;

    i = 0;
    if (argc != 3)
        return (0);
    while (argv[1][i] != '\0')
    {
        if (is_forbidden(argv[1][i]) == 0)
        {
            printf("%c", argv[1][i]);
        }
        i++;
    }
    i = 0;
    while (argv[2][i] != '\0')
    {
        if (is_forbidden(argv[2][i]) == 0)
        {
            printf("%c", argv[2][i]);
        }
        i++;
    }
    return (0);
}
