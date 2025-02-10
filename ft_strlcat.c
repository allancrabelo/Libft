/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugusto <aaugusto@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 21:43:00 by aaugusto          #+#    #+#             */
/*   Updated: 2025/02/10 21:55:55 by aaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(/* int argc, char **argv */)
{
/* 	if (argc != 4)
	{
		printf("Input Error\n");
		return (1);
	}
	printf("Original strlcat: %s\n", argv[1], argv[2] , atoi(argv[3]));
	return (0); */

	char a[] = "42_";
	char b[] = "School";
	size_t c = 4;

	strlcat(a, b, c);
	printf("%s\n", a);
}