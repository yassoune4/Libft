/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalihi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 20:41:42 by ysalihi           #+#    #+#             */
/*   Updated: 2018/10/18 22:27:31 by ysalihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*t;
	int		size;
	int		i;
	int		j;

	j = 0;
	i = 0;
	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	size = ft_strlen(s1) + ft_strlen(s2);
	if (!(t = (char *)malloc(sizeof(char) * size)))
		return (NULL);
	while (s1[i] != '\0')
	{
		t[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
		t[i++] = s2[j++];
	t[i] = '\0';
	return (t);
}
