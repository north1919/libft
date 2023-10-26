/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgokcu <sgokcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 17:15:44 by sgokcu            #+#    #+#             */
/*   Updated: 2023/10/17 16:29:39 by sgokcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*d;
	size_t	i;

	i = 0;
	d = (char *)s;
	while (n > i)
	{
		if ((unsigned char)d[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	return (0);
}
