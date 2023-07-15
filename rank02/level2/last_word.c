/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguezzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 14:17:09 by aguezzi           #+#    #+#             */
/*   Updated: 2023/02/04 14:43:12 by aguezzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	len(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int main(int argc, char **argv)
{
	int	i;

	if (argc == 2)
	{
		i = len(argv[1]) - 1;
		while ((argv[1][i] == ' ' || argv[1][i] == '\t') && i >= 0)
			i--;
		while ((argv[1][i] >= 33 && argv[1][i] <= 126) && i >= 0)
			i--;
		i++;
		while ((argv[1][i] >= 33 && argv[1][i] <= 126) && i >= 0)
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
