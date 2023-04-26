/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprieto- <aprieto-@42malaga.student.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 09:09:05 by aprieto-          #+#    #+#             */
/*   Updated: 2023/04/26 09:09:06 by aprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *sone;
	unsigned char *stwo;

	sone = (unsigned char *)s1;
	stwo = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (*sone == *stwo && n-- > 0)
	{
		sone++;
		stwo++;
		if (n == 0)
			return (0);
	}
	if (*sone != *stwo)
	{
		return (*sone - *stwo);
	}
	return (0);
}