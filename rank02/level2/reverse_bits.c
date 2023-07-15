/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguezzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 15:11:39 by aguezzi           #+#    #+#             */
/*   Updated: 2023/02/04 15:34:01 by aguezzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned char	reverse_bits(unsigned char octet)
{
	int	i;
	int	j;
	int	res;

	i = 128;
	j = 1;
	res = 0;
	while (i > 0)
	{
		if (octet / i == 1)
		{
			res += j;
			octet -= i;
		}
		i /= 2;
		j *= 2;
	}
	return (res);
}

void	print_bits(unsigned char octet)
{
	int	i;

	i = 128;
	while (i > 0)
	{
		if (octet / i == 1)
		{
			write(1, "1", 1);
			octet -= i;
		}
		else
			write(1, "0", 1);
		i /= 2;
	}
}

int main()
{
	print_bits(222);
	write(1, "\n", 1);
	print_bits(reverse_bits(222));
}
