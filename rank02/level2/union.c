/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguezzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 23:27:06 by aguezzi           #+#    #+#             */
/*   Updated: 2023/02/07 23:42:38 by aguezzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int argc, char **argv)
{
	int	i;
	int	j;
	int	k;
	int ok;

	i = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			j = 0;
			ok = 1;
			while (i > j)
			{
				if (argv[1][i] == argv[1][j])
					ok = 0;
				j++;
			}
			if (ok)
				write(1, &argv[1][i], 1);
			i++;
		}
		i = 0;
		while (argv[2][i])
		{
			j = 0;
			ok = 1;
			while (argv[1][j])
			{
				if (argv[2][i] == argv[1][j])
					ok = 0;
				j++;
			}
			k = 0;
			while (i > k)
			{
				if (argv[2][i] == argv[2][k])
					ok = 0;
				k++;
			}
			if (ok)
				write(1, &argv[2][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
