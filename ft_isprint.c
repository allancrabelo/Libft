/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugusto <aaugusto@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 16:06:13 by aaugusto          #+#    #+#             */
/*   Updated: 2025/02/09 16:17:01 by aaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isprint(int c)
{
    if (c < 32 || c == 127)
        return (1);
    return (0);
}
/* 
int	main(int argc, char **argv)
{
    if (argc != 2)
    {
        printf("Input Error\n");
        return (1);
    }
    printf("Original isprint: %d\n", isprint(argv[1][0]));
    printf("Ft_isprint: %d\n", ft_isprint(argv[1][0]));
	return (0);
} */