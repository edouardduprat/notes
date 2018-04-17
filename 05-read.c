/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05-read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduprat <eduprat@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 17:35:32 by eduprat           #+#    #+#             */
/*   Updated: 2018/04/16 18:27:50 by eduprat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int     main(void)
{
    int     fd;
    int     char_count;
    int     buf_size = 8;
    char    buffer[buf_size + 1];

    // OPEN FILE
    fd = open("files/README.txt", O_RDONLY);
    printf("%d\n", fd);

    // READ FILE
    // while (char_count = read(fd, &buffer, buf_size)) // DOES NOT WORK
    // ITS LIKE ((5+2) - 3) -> (7) - 3 | we want while to evaluate inner paranthesis first, then check.
    while ((char_count = read(fd, &buffer, buf_size)))
    {
        buffer[char_count] = '\0';
        printf("%s", buffer);
    }
    
    return (0);
}
