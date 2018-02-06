/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 16:08:20 by vquesnel          #+#    #+#             */
/*   Updated: 2018/02/06 11:55:39 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t a;

	a = 0;
	if (!dst && !src)
		return (NULL);
	ft_bzero(dst, len);
	while (src[a] && a < len)
	{
		dst[a] = src[a];
		a++;
	}
	return (dst);
}
