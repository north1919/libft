/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgokcu <sgokcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 17:15:51 by sgokcu            #+#    #+#             */
/*   Updated: 2023/10/23 14:33:15 by sgokcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*f;

	i = 0;
	d = (char *)dst;
	f = (char *)src;
	if (dst == NULL && src == NULL)
		return (0);
	while (i < n)
	{
		d[i] = f[i];
		i++;
	}
	return (dst);
}
