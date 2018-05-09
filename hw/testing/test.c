/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduprat <eduprat@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/06 14:24:50 by eduprat           #+#    #+#             */
/*   Updated: 2018/05/07 15:31:17 by eduprat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

void    count_chars(char *files)
{
    int fd;
    int char_count;
    int buff_size = 8;
    char buffer[buff_size +1];
    int i;
    int line_count;
    int total;

    char_count = 0;
    total = 0;
    line_count = 0;
    fd = open(files, O_RDONLY);
    if(fd == -1)
        exit(0);
    while ((char_count = read(fd, &buffer, buff_size)) > 0)
    {
        total = total + char_count;
        buffer[char_count] = '\0';
        i = 0;
        while (buffer[i])
        {
            if (buffer[i] == '\n')
                line_count++;
            i++;
        }
    }
    printf("%d line_count\n", line_count);
    printf("%d char_count\n", total);
}

int     main(int argc, char **argv)
{
    if(argc == 2)
        count_chars(argv[1]);
    write(1, "\n", 1);
    return(0);
}