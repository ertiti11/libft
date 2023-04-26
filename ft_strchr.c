/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprieto- <aprieto-@42malaga.student.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 09:09:12 by aprieto-          #+#    #+#             */
/*   Updated: 2023/04/26 09:09:13 by aprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int i;
	int tofind;

	tofind = 0;
	i = 0;

	while (((char *)str)[i] != '\0' && tofind == 0)
	{
		if (((char *)str)[i] == c)
		{
			return ((char *)&str[i]);
			tofind = 1;
		}
	}
	if (c == '\0')
	{
		return ((char *)&str[i]);
	}
	return (NULL);
}