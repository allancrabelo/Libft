/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugusto <aaugusto@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 21:54:53 by aaugusto          #+#    #+#             */
/*   Updated: 2025/02/10 22:28:19 by aaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while(i < n)
	{
		if(s1[i] && s2[i] && s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}
/* 
int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		printf("Input Error");
		return (1);
	}

	size_t n;
	int result;
	
	n = atoi(argv[3]);
	result = strncmp(argv[1], argv[2], n);
	
	printf("Original strncmp: %d\n", result);

	result = ft_strncmp(argv[1], argv[2], n);

	printf("Ft_strncmp: %d\n", result);
	
	return (0);
} */