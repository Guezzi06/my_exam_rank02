/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguezzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 22:46:17 by aguezzi           #+#    #+#             */
/*   Updated: 2023/02/14 23:17:04 by aguezzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_len(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_atoi(char *s)
{
	int n;
	int	i;
	int base;

	n = 0;
	i = ft_len(s) - 1;
	base = 1;
	while (i >= 0)
	{
		n += (s[i] - 48) * base;
		base *= 10;
		i--;
	}
	return (n);
}

void ft_print_hex(int n)
{
	if (n >= 16)
	{
		ft_print_hex(n / 16);
		ft_print_hex(n % 16);
	}
	else if (n < 10)
		ft_putchar(n + '0');
	else
		ft_putchar(n + 'a' - 10);
}

int main (int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (!(argv[1][i] >= '0' && argv[1][i] <= '9'))
			{
				write(1, "\n", 1);
				return (0);
			}
			i++;
		}
		ft_print_hex(ft_atoi(argv[1]));
	}
	write(1, "\n", 1);
}
