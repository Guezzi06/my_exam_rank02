/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguezzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 14:09:07 by aguezzi           #+#    #+#             */
/*   Updated: 2023/02/12 14:11:48 by aguezzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_rrange(int start, int end)
{
	int	*tab;
	int	i;

	i = 0;
	if (start < end)
		tab = malloc(sizeof(int) * (end - start) + 1);
	else
		tab = malloc(sizeof(int) * (start - end) + 1);
	if (!tab)
		return (0);
	if (start < end)
	{
		while (i <= end - start)
		{
			tab[i] = end - i;
			i++;
		}
	}
	else
	{
		while (i <= start - end)
		{
			tab[i] = end + i;
			i++;
		}
	}
	return (tab);
}

int main ()
{
	int *tab;

	tab = ft_rrange(0, -3);
	for (int i = 0; i < 4; i++)
	{
		printf("%d ", tab[i]);
	}
}
