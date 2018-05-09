/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduprat <eduprat@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/04 13:45:10 by eduprat           #+#    #+#             */
/*   Updated: 2018/05/06 20:23:51 by eduprat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

void    count_chars(char *files)
{
        int fd;
        int char_count;
        int buff_size = 8;
        char buffer[buff_size +1];
        int i;
        int line_count;
        int total;

        total = 0;
        line_count = 1;
        char_count = 0;
        fd = open(files, O_RDONLY);
        if (fd == -1)
            exit(0);
        while ((char_count = read(fd, &buffer, buff_size)) > 0)
        {
            total = total+char_count;
            buffer[char_count] = '\0';
            i = 0;
            while (buffer[i])
            {
                if (buffer[i] == '\n')
                    line_count++;
                i++;
            }
        }
        printf("%d line(s)\n", line_count);
        printf("%d character(s)\n", total);
}

int     main(int argc, char **argv)
{
    if(argc == 2)
        count_chars(argv[1]);
    write(1, "\n", 1);
    return(0);
}