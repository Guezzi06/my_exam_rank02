/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguezzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 14:37:43 by aguezzi           #+#    #+#             */
/*   Updated: 2023/02/12 15:06:30 by aguezzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	lcm(unsigned int a, unsigned int b)
{
	int	i;
	int	baseA;
	int	baseB;

	baseA = a;
	baseB = b;
	if (a == 0 || b == 0)
		return (0);
	if (a == b)
		return (a);
	while (a != b)
	{
		i = 2;
		if (a > b)
		{
			while (a >= b*i)
			{
				if (b*i == a)
					return (a);
				i++;
			}
			a += baseA;
		}
		else
		{
			while (b >= a*i)
			{
				if (a*i == b)
					return (b);
				i++;
			}
			b += baseB;
		}
	}
	return (a);
}

int main ()
{
	printf("%d", lcm(72, 132));
}
