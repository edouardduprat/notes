/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduprat <eduprat@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 17:00:41 by eduprat           #+#    #+#             */
/*   Updated: 2018/05/06 23:29:17 by eduprat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

void        count_ones(char *files)
{
    int fd;
    int char_count;
    int buff_size = 8;
    char buffer[buff_size +1];
    int i;
    int count;

    count = 0;
    // opens the file
    fd = open(files, O_RDONLY);
    if (fd == -1)
        exit(0);
    //          file descriptor| string |how many bytes it reads 
    while ((char_count = read(fd, &buffer, buff_size)))
    {
        // adding null at the end of the string 
        buffer[char_count] = '\0';  
        i = 0;
        while(buffer[i])
        {
            //  the number its counting
            if (buffer[i] == '1')
                count++;
            i++;
        }
    }
    printf("%d", count);
}

int     main(int argc, char **argv)
{
    // 
    if (argc == 2)
        count_ones(argv[1]);
    write(1, "\n", 1);
    return (0);
}