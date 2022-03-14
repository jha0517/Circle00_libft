/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyujung <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 19:39:36 by hyujung           #+#    #+#             */
/*   Updated: 2021/12/11 19:41:29 by hyujung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;
	size_t			i;

	i = 0;
	if (!dst && !src)
		return ((void *)src);
	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	while (n--)
	{
		d[i] = s[i];
		i++;
	}
	return ((void *)d);
}
