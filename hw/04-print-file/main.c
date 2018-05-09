/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduprat <eduprat@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/07 14:13:24 by eduprat           #+#    #+#             */
/*   Updated: 2018/05/07 15:24:53 by eduprat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

void    print_file(char *files)
{
    int fd;
    int char_count;
    int buff_size = 8;
    char buffer[buff_size + 1];

    fd = open(files, O_RDONLY);
    if (fd == -1)
        exit(0);
    while((char_count = read(fd, &buffer, buff_size)))
    {
        buffer[char_count] = '\0';
        write(1, &buffer, char_count);
    }
}

int     main(int argc, char **argv)
{
    if (argc == 2)
        print_file(argv[1]);
    write(1, "\n", 1);
    return(0);
}