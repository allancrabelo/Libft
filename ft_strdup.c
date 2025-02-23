/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugusto <aaugusto@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 16:28:21 by aaugusto          #+#    #+#             */
/*   Updated: 2025/02/23 01:08:17 by aaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dest;
	int	i;

	i = 0;
	dest = (char *)malloc((ft_strlen((src) + 1) * sizeof(char)));
	if(!(dest))
		return (NULL);
	while(src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/* 
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf ("Input Error\n");
		return (1);
	}
	printf ("Original strdup: %s\n", strdup(argv[1]));
	printf ("Ft_strdup: %s\n", ft_strdup(argv[1]));

	return (0);
} */