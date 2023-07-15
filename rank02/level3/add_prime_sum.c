/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguezzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 23:54:28 by aguezzi           #+#    #+#             */
/*   Updated: 2023/02/08 01:28:10 by aguezzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int len (char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int putnbr(char *s)
{
	int	nb;
	int i;

	nb = 0;
	i = 0;
	while (i <= len(s) - 1)
	{
		nb = nb*10 + s[i] - 48;
		i++;
	}
	return (nb);
}

void putstr(int n)
{
	char c;
	int i;

	i = 10;
	while (n / i > 9)
		i *= 10;
	if (n > 9)
	{
		while (i != 1)
		{
			c = ((n/i)%10 + 48);
			write(1, &c, 1);
			i /= 10;
		}
	}
	c = n % 10 + 48;
	write(1, &c, 1);
}

int nb_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb == 2)
		return (1);
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int main (int argc, char **argv)
{
	int	i;
	int	nb;
	int sum;

	i = 0;
	sum = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (!(argv[1][i] >= '0' && argv[1][i] <= '9'))
			{
				write(1, "0", 1);
				exit(0);
			}
			i++;
		}
		nb = putnbr(argv[1]);
		while (nb >= 2)
		{
			if (nb_is_prime(nb))
				sum += nb;
			nb--;
		}
	}
	putstr(sum);
}
