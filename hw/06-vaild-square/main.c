/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduprat <eduprat@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/09 21:17:01 by eduprat           #+#    #+#             */
/*   Updated: 2018/05/31 16:33:39 by eduprat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>

void    validate_square(char *files)
{
    int fd;
    int char_count;
    int buff_size = 8;
    char buffer[buff_size + 1];
    int i;
    int dot_count;
    int line_count;

    dot_count = 0;
    fd = open(files, O_RDONLY);
    if (fd == -1)
        exit(0);
    printf("%d", fd);
    
    while((char_count = read(fd, &buffer, buff_size)))
    {
        buffer[char_count] = '\0';
        i = 0;
        while(buffer[i])
        {
            if (buffer[i] != '.' && buffer[i] != '\n')
            {
                write(1, "error: improper character\n", 27);
                {
                    write(1, &buffer[i], 1);                    
                    exit(0);
                }
            }
            i++;
        }
        while (i % 5 == 0 && buffer[i] == '\n')
        {
            if (buffer[i] == '\n' && )
            {
                line_count++;
            }
            i++;
            if (buffer[i] < 4)
                exit(0);
         }
    }
}


int     main(int argc, char **argv)
{
    if (argc == 2)
        validate_square(argv[1]);
    write(1, "\n", 1);
    return(0);
}