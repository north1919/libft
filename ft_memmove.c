/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgokcu <sgokcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 17:15:54 by sgokcu            #+#    #+#             */
/*   Updated: 2023/10/23 14:39:53 by sgokcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*d;
	const char	*f;

	i = 0;
	d = (char *)dst;
	f = (const char *)src;
	if (f < d)
	{
		while (len > 0)
		{
			len--;
			d[len] = f[len];
		}
	}
	else if (f > d)
	{
		while (i < len)
		{
			d[i] = f[i];
			i++;
		}
	}
	return (dst);
}
