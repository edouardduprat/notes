/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03-open.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduprat <eduprat@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 16:55:24 by eduprat           #+#    #+#             */
/*   Updated: 2018/04/16 18:27:41 by eduprat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

void    ft_error(int fd)
{
    if (fd < 1)
        printf("error\n");
    else    
        printf("%d\n", fd);
}

int     main(void)
{
    int fd;
    // OPENING FILES
    fd = open("files/count-ones.txt", O_RDONLY);
    printf("%d\n", fd);

    fd = open("files/README.txt", O_RDONLY);
    printf("%d\n", fd);

    fd = open("/does/not/exist", O_RDONLY);
    printf("%d\n", fd);

    if (fd < 1)
        printf("error!\n");

    // // MORE ADVANCED ERROR HANDLING
    // ft_error((fd = open("../fillit/files/count-ones.txt", O_RDONLY)));
    // ft_error((fd = open("/does/not/exist", O_RDONLY)));    
    // ft_error((fd = open("../fillit/files/README.txt", O_RDONLY)));

    return (0);
}

