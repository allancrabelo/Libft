/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugusto <aaugusto@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 22:36:00 by aaugusto          #+#    #+#             */
/*   Updated: 2025/02/10 22:57:27 by aaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* void	*ft_memset(void *s, int c, size_t n); */

int	main(void)
{
	char array[] = "encryption";

	memset(array, 'X', 5);
	
	printf("%s\n", array);
	return (0);
}