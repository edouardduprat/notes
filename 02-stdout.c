/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdout.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduprat <eduprat@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 16:55:24 by eduprat           #+#    #+#             */
/*   Updated: 2018/04/16 17:07:37 by eduprat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    int     size;

    size = 0;
    while (str[size] != '\0')
        size++;
    write(1, str, size);
}

int     main(void)
{
    // // cannot use quotes ("") because that is a char*, must use apostrophe('') for single char.
    // ft_putchar("a");
    ft_putchar('a');
    ft_putchar('\n');
    ft_putstr("a\n");
    return (0);
}