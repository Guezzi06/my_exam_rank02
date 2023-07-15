/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguezzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 21:18:21 by aguezzi           #+#    #+#             */
/*   Updated: 2023/02/08 22:05:51 by aguezzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int	i;
	int	j;
	int	c;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			c = 0;
			while (argv[1][i] && (argv[1][i] == ' ' || argv[1][i] == '\t'))
				i++;
			while (!(argv[1][i] == ' ' || argv[1][i] == '\t') && (argv[1][i]))
			{
				write(1, &argv[1][i], 1);
				i++;
			}
			j = i;
			while (argv[1][j])
			{
				if (!(argv[1][j] == ' ' || argv[1][j] == '\t'))
					c++;
				j++;
			}
			if (c)
				write(1, " ", 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}
