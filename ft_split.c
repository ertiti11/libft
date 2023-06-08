/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprieto- <aprieto-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 09:09:10 by aprieto-          #+#    #+#             */
/*   Updated: 2023/06/08 18:32:43 by aprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcount(char const *str, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			j++;
			while (str[i] && str[i] != c)
				i++;
		}
		else
			i++;
	}
	return (j);
}

static int	ft_size_word(char const *str, char c, int i)
{
	int	size;

	size = 0;
	while (str[i] != c && str[i])
	{
		i++;
		size++;
	}
	return (size);
}

static void	ft_free(char **str, int j)
{
	while (j-- > 0)
	{
		free(str[j]);
	}
	free(str);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		word;
	int		size;
	char	**str;

	i = 0;
	j = 0;
	word = ft_wordcount(s, c);
	str = (char **)malloc((word + 1) * (sizeof(char *)));
	if (!str)
		return (NULL);
	while (j < word)
	{
		while (s[i] == c)
			i++;
		size = ft_size_word(s, c, i);
		str[j] = ft_substr(s, i, size);
		if (!(str[j]))
			return (ft_free(str, j), NULL);
		i += size;
		j++;
	}
	str[j] = 0;
	return (str);
}
