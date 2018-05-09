/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduprat <eduprat@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/07 15:32:47 by eduprat           #+#    #+#             */
/*   Updated: 2018/05/09 13:18:59 by eduprat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

void    skip_first_line(char *files)
{
    int fd;
    int char_count;
    int buff_size = 8;
    char buffer[buff_size + 1];
    int line_count; 
    int i;

    i = 0;
    line_count = 0;
    fd = open(files, O_RDONLY);
    if (fd == -1)
        exit(0);
    while((char_count = read(fd, &buffer, buff_size)))
    {
        buffer[char_count] = '\0';
        i = 0;
        while(buffer[i])
        {
            if (buffer[i] == '\n')
                line_count++;
            if (line_count == 1 && buffer[i] == '\n')
                break ;
            else if (line_count >= 1)
                write(1, &buffer[i], 1);
            i++;
        }
    }
}

int     main(int argc, char **argv)
{
    if (argc == 2)
        skip_first_line(argv[1]);
    // write(1, "\n", 1);
    return(0);
}