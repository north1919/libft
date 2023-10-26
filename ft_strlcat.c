/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgokcu <sgokcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 17:16:27 by sgokcu            #+#    #+#             */
/*   Updated: 2023/10/17 17:26:22 by sgokcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	size;
	size_t	gone;

	i = 0;
	size = ft_strlen(dst);
	gone = ft_strlen(src);
	if (size >= dstsize)
		return (dstsize + gone);
	if (dstsize != 0)
	{
		while (src[i] && i < dstsize - size - 1)
		{
			dst[size + i] = src[i];
			i++;
		}
	}
	dst[size + i] = '\0';
	return (size + gone);
}
