/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalihi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 18:21:28 by ysalihi           #+#    #+#             */
/*   Updated: 2018/10/12 18:21:29 by ysalihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char*))
{
	int i;

	i = 0;
	if (s && f)
	{
		while (s[i] != '\0')
		{
			(f)(&s[i]);
			i++;
		}
	}
}