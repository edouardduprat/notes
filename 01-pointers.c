/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduprat <eduprat@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 16:29:01 by eduprat           #+#    #+#             */
/*   Updated: 2018/04/16 17:18:16 by eduprat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    change_char(char a)
{
    a = 'x';
}

void    change_pointer(char *b)
{
    *b = 'x';
}

int     main(void)
{
    // // difference between pointer and value
    // char c = 'x';
    // printf("%p\n", &c);
    // printf("%c\n", c);

    // pointers
    char a = 'a';
    char b = 'b';
    change_char(a);
    change_pointer(&b);
    printf("a = %c | b = %c\n", a, b);

    return (0);
}