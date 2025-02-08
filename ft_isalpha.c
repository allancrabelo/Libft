/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugusto <aaugusto@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 17:54:03 by aaugusto          #+#    #+#             */
/*   Updated: 2025/02/08 18:25:04 by aaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int ft_isalpha(int c);

int main(/* int argc, char **argv */)
{
    char a = 'o';
    
    printf("Original isalpha: %d\n", isalpha(a));
    
/*     if(argc != 2)
    {
        printf("Input Error\n");
        return (1);
    }

    printf("Original isalpha: %d\n", isalpha(argv[1][0])); */
    return (0);
}