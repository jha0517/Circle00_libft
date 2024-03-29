/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyujung <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 12:26:50 by hyujung           #+#    #+#             */
/*   Updated: 2021/12/11 19:51:53 by hyujung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	counter;
	char	*s;
	char	*t;

	s = (char *)str;
	t = (char *)to_find;
	if (!*t)
		return ((char *)s);
	i = 0;
	while (s[i] && i < n)
	{
		counter = 0;
		while (((i + counter) < n) && (s[i + counter] == t[counter]))
		{
			if (t[counter + 1] == '\0')
			{
				return ((char *)&s[i]);
			}
			counter++;
		}
		i++;
	}
	return (0);
}
