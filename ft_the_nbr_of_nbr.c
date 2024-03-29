/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_the_nbr_of_nbr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalihi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/15 19:22:03 by ysalihi           #+#    #+#             */
/*   Updated: 2018/10/15 19:22:07 by ysalihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_the_nbr_of_nbr(int nbr)
{
	int cpt;

	cpt = 0;
	if (nbr <= 0)
		cpt++;
	while (nbr)
	{
		nbr /= 10;
		cpt++;
	}
	return (cpt);
}
