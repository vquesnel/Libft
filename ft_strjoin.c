/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 16:46:41 by vquesnel          #+#    #+#             */
/*   Updated: 2018/02/06 11:55:23 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		a;
	char	*ret;

	a = 0;
	if (!s1 || !s2)
		return (0);
	ret = ft_memalloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!ret)
		return (0);
	while (*s1)
	{
		ret[a] = *s1;
		s1++;
		a++;
	}
	while (*s2)
	{
		ret[a] = *s2;
		s2++;
		a++;
	}
	ret[a] = '\0';
	return (ret);
}
