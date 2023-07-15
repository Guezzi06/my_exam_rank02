/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguezzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 05:41:41 by aguezzi           #+#    #+#             */
/*   Updated: 2023/03/05 06:00:33 by aguezzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int argc, char **argv)
{
	int i;
	int j;

	j = 1;
	if (argc > 1)
	{
		while (j < argc)
		{
			i = 0;
			if (j > 1)
				write(1, "\n", 1);
			while (argv[j][i])
			{
				if (argv[j][i] >= 'A' && argv[j][i] <= 'Z')
					argv[j][i] += 32;
				i++;
			}
			i = 0;
			while (argv[j][i])
			{
				if (argv[j][i] >= 'a' && argv[j][i] <= 'z')
				{
					if (i == 0)
						argv[j][i] -= 32;
					else if (argv[j][i-1] == ' ')
						argv[j][i] -= 32;
				}
				write(1, &argv[j][i], 1);
				i++;
			}
			j++;
		}
	}
	write(1, "\n", 1);
}
