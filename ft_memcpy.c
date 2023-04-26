/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprieto- <aprieto-@42malaga.student.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 09:09:07 by aprieto-          #+#    #+#             */
/*   Updated: 2023/04/26 09:09:08 by aprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned const char *s;
	unsigned char *d;

	size_t i;
	i = 0;
	s = (unsigned char *)src;
	d = (unsigned char *)dest;

	while (dest == src || !n)
	{
		return (dest);
	}

	while (n > i)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}