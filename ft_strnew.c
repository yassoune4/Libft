/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalihi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 16:02:11 by ysalihi           #+#    #+#             */
/*   Updated: 2018/10/12 16:02:13 by ysalihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*tab;
	size_t	i;

	i = 0;
	if (!(tab = (char *)malloc(size + 1)))
		return (NULL);
	while (i < size)
		tab[i++] = '\0';
	tab[i] = '\0';
	return (tab);
	return (NULL);
}
