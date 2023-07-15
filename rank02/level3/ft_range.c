/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguezzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 13:52:44 by aguezzi           #+#    #+#             */
/*   Updated: 2023/02/12 14:07:46 by aguezzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int start, int end)
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
			tab[i] = start + i;
			i++;
		}
	}
	else
	{
		while (i <= start - end)
		{
			tab[i] = start - i;
			i++;
		}
	}
	return (tab);
}

int main ()
{
	int *tab;

	tab = ft_range(-3, -3);
	for (int i = 0; i < 1; i++)
	{
		printf("%d ", tab[i]);
	}
}
