/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugusto <aaugusto@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 10:23:27 by aaugusto          #+#    #+#             */
/*   Updated: 2025/02/27 10:42:50 by aaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countdigit(int n)
{
	int count;

	count = 0;
	if (n <= 0)
	{
		count++;
		n = -n;
	}
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char *res;

	res = (char *)malloc((ft_countdig(n) + 1) * sizeof(char));
	if (!res)
		return (NULL);
	return (res);
}