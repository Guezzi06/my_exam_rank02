/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguezzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 20:20:01 by aguezzi           #+#    #+#             */
/*   Updated: 2023/02/14 20:56:19 by aguezzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int n)
{
	char c;

	if (n == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (n >= 10)
		{
			ft_putnbr(n / 10);
			ft_putnbr(n % 10);
		}
		else
		{
			c = n + '0';
			write(1, &c, 1);
		}
	}
}

int main (int argc, char **argv)
{
	int n;
	char c;

	n = 0;
	c = argv[0][0];
	while (argc > 1)
	{
		n++;
		argc--;
	}
	ft_putnbr(n);
	write(1, "\n", 1);
	return (0);
}
