/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalihi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 21:05:16 by ysalihi           #+#    #+#             */
/*   Updated: 2018/10/14 21:09:15 by ysalihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	int i;

	i = 0;
	if (s)
	{
		while (s[i] != '\0')
		{
			ft_putchar_fd((char)s[i], fd);
			i++;
		}
	}
}
