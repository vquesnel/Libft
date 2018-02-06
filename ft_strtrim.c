/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 17:58:02 by vquesnel          #+#    #+#             */
/*   Updated: 2018/02/06 11:56:11 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int i;
	int len;

	i = 0;
	if (!s)
		return (NULL);
	while (ft_isspace(s[i]) == 1)
	{
		i++;
		if (s[i] == '\0')
			return (ft_strdup(""));
	}
	len = ft_strlen(s);
	if (s[len] == '\0')
		len--;
	while (ft_isspace(s[len]) == 1)
		len--;
	return (ft_strsub(s, i, len - i + 1));
}
