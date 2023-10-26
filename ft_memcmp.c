/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgokcu <sgokcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 17:15:48 by sgokcu            #+#    #+#             */
/*   Updated: 2023/10/19 15:08:17 by sgokcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*d;
	char	*f;
	size_t	i;

	i = 0;
	d = (char *)s1;
	f = (char *)s2;
	while (i < n)
	{
		if (d[i] != f[i])
			return ((unsigned char)d[i] - (unsigned char)f[i]);
		i++;
	}
	return (0);
}
