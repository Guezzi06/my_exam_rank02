/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguezzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 05:19:38 by aguezzi           #+#    #+#             */
/*   Updated: 2023/03/05 05:36:51 by aguezzi          ###   ########.fr       */
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
				if (argv[j][i+1] == ' ' || argv[j][i+1] == '\0')
				{
					if (argv[j][i] >= 'a' && argv[j][i] <= 'z')
						argv[j][i] -= 32;
				}
				else if (argv[j][i] >= 'A' && argv[j][i] <= 'Z')
				{
					argv[j][i] += 32;
				}
				write(1, &argv[j][i], 1);
				i++;
			}
			j++;
		}
	}
	write(1, "\n", 1);
}
