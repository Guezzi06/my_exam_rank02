/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguezzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 15:16:33 by aguezzi           #+#    #+#             */
/*   Updated: 2023/02/03 16:11:02 by aguezzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int	i;
	int	j;
	int	k;
	int	print;

	i = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			j = 0;
			while (argv[1][i] != argv[2][j] && argv[2][j])
				j++;
			if (argv[2][j])
			{
				k = 0;
				print = 1;
				while (k < i)
				{
					if (argv[1][i] == argv[1][k])
						print = 0;
					k++;
				}
				if (print)
					write(1, &argv[1][i], 1);
			}
			i++;
		}	
	}
	write(1, "\n", 1);
	return (0);
}
