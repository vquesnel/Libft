/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 16:20:10 by vquesnel          #+#    #+#             */
/*   Updated: 2018/02/06 11:56:09 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*ns;
	size_t	i;
	size_t	j;

	ns = ft_strnew(len);
	if (!s || !ns)
		return (NULL);
	i = 0;
	j = 0;
	while (start--)
		i++;
	while (j < len)
	{
		ns[j] = s[i];
		i++;
		j++;
	}
	ns[j] = '\0';
	return (ns);
}
