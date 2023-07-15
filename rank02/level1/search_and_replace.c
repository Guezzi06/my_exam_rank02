/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguezzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 13:37:50 by aguezzi           #+#    #+#             */
/*   Updated: 2023/01/30 13:51:25 by aguezzi          ###   ########.fr       */
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

int main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 4 && len(argv[2]) == 1 && len(argv[3]) == 1)
	{
		while (argv[1][i])
		{
			if (argv[1][i] == argv[2][0])
				write(1, &argv[3][0], 1);
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
