/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgokcu <sgokcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 17:15:41 by sgokcu            #+#    #+#             */
/*   Updated: 2023/10/17 16:29:32 by sgokcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_len(long a, int sign)
{
	int	b;

	b = 0;
	if (a == 0)
		b = 1;
	while (a > 0)
	{
		b++;
		a = a / 10;
	}
	if (sign < 0)
		b++;
	return (b);
}

char	*ft_itoa(int n)
{
	char	*s;
	long	x;
	int		i;
	int		sign;

	x = n;
	sign = 1;
	if (x < 0)
		sign = -1;
	x = sign * x;
	i = ft_len(x, sign);
	s = malloc(i + 1);
	if (!s)
		return (NULL);
	s[i] = '\0';
	while (--i >= 0)
	{
		s[i] = (x % 10) + '0';
		x = x / 10;
	}
	if (sign == -1)
		s[0] = '-';
	return (s);
}
