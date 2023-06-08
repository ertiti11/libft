/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprieto- <aprieto-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 16:40:49 by aprieto-          #+#    #+#             */
/*   Updated: 2023/06/08 18:29:59 by aprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	j;

	j = 0;
	while (j < n && (s1[j] || s2[j]))
	{
		if (s1[j] != s2[j])
			return (((unsigned char *)s1)[j] - ((unsigned char *)s2)[j]);
		j++;
	}
	return (0);
}
