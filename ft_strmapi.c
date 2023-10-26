/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgokcu <sgokcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 17:16:36 by sgokcu            #+#    #+#             */
/*   Updated: 2023/10/21 13:47:53 by sgokcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*dest;
	int		i;
	int		g;

	i = 0;
	g = 0;
	while (s[i])
		i++;
	dest = malloc(i + 1);
	if (dest == 0)
		return (0);
	while (s[g])
	{
		dest[g] = f(g, s[g]);
		g++;
	}
	dest[g] = '\0';
	return (dest);
}
