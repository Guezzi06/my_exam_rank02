/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguezzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 17:01:20 by aguezzi           #+#    #+#             */
/*   Updated: 2023/01/28 17:07:02 by aguezzi          ###   ########.fr       */
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

	if (argc == 2)
	{
		i = len(argv[1]) - 1;
		while (i >= 0)
		{
			write(1, &argv[1][i], 1);
			i--;
		}
	}
	write(1, "\n", 1);
}
