/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04-while.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduprat <eduprat@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 17:35:32 by eduprat           #+#    #+#             */
/*   Updated: 2018/04/16 18:08:30 by eduprat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int     main(void)
{
    while (1)
    {
        printf("1\n");
        break ;
    }
    while (NULL)
    {
        printf("NULL\n");
        break ;
    }
    while (0)
    {
        printf("0\n");
        break ;
    }
    while (2)
    {
        printf("2\n");
        break ;
    }
    while ("hi")
    {
        printf("hi\n");
        break ;
    }
    while (-1)
    {
        printf("-1\n");
        break ;
    }
        while ((0))
    {
        printf("(0)\n");
        break ;
    }
    
    return (0);
}
