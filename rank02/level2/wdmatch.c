/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguezzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 23:44:29 by aguezzi           #+#    #+#             */
/*   Updated: 2023/02/07 23:49:53 by aguezzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int len(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int main (int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (argc == 3)
	{
		while (argv[1][i] && argv[2][j])
		{
			if (argv[1][i] == argv[2][j])
				i++;
			j++;
		}
		if (!(argv[1][i]))
			write(1, argv[1], len(argv[1]));
	}
	write(1, "\n", 1);
	return (0);
}
