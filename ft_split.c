/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugusto <aaugusto@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 16:13:56 by aaugusto          #+#    #+#             */
/*   Updated: 2025/02/26 17:19:14 by aaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_occurence(char const *s, char c)
{
	int	word_count;
	int	i;
	
	i = 0;
	word_count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			word_count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (word_count);
}

char **ft_split(char const *s, char c)
{
	char	**res;
	size_t	len;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	j = 0;
	i = 0;
	len = ft_occurence(s, c);
	res = (char **)malloc((len + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	while (j < len)
	{
		
	}
}
int	main(void)
{
	
	return (0);
}