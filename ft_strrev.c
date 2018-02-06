/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 17:03:14 by vquesnel          #+#    #+#             */
/*   Updated: 2018/02/06 11:55:59 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int		a;
	int		b;
	char	temp;

	a = 0;
	b = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	while (b < a)
	{
		temp = str[a - 1];
		str[a - 1] = str[b];
		str[b] = temp;
		a--;
		b++;
	}
	return (str);
}
