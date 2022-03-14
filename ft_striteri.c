/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyujung <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 20:06:27 by hyujung           #+#    #+#             */
/*   Updated: 2021/12/11 20:07:02 by hyujung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	void	(*ptr)(unsigned int, char*);
	int		i;

	i = 0;
	ptr = f;
	if (!s || !f)
		return ;
	while (s[i])
	{
		ptr(i, &(s[i]));
		i++;
	}
}
