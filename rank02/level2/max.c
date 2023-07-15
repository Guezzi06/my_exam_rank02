/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguezzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 14:44:45 by aguezzi           #+#    #+#             */
/*   Updated: 2023/02/04 15:00:26 by aguezzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	max(int *tab, unsigned int len)
{
	int	max;

	if (len == 0)
		return (0);
	max = tab[0];
	while (len > 0)
	{
		if (tab[len - 1] > max)
			max = tab[len - 1];
		len--;
	}
	return (max);
}

int main()
{
	int tab[] = {0, 4, 7, 2, 99, 6, 89, 45, 53, 23};
	printf("%d\n", max(tab, 10));
}
