/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguezzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 20:58:16 by aguezzi           #+#    #+#             */
/*   Updated: 2023/02/14 21:15:28 by aguezzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int pgcd(int n1, int n2)
{
	int	i;

	if (n1 > n2)
		i = n2;
	else
		i = n1;
	while (1)
	{
		if (n1 % i == 0 && n2 % i == 0)
			return (i);
		i--;
	}
}

int main (int argc, char **argv)
{
	if (argc == 3)
	{
		if (!(atoi(argv[1]) <= 0 || atoi(argv[2]) <= 0))
			printf("%d", pgcd(atoi(argv[1]), atoi(argv[2])));
	}
	printf("\n");
}
