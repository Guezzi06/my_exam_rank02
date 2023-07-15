/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguezzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 12:35:10 by aguezzi           #+#    #+#             */
/*   Updated: 2023/02/12 13:32:24 by aguezzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int len(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int		i;
	int		nb;
	int		pow;
	char	c;

	i = len(str) - 1;
	nb = 0;
	pow = str_base;
	while (i >= 0)
	{
		c = str[i];
		if (c >= '0' && c <= '9')
		{
			if (i == len(str) - 1)
				nb += c - 48;
			else
			{
				nb += (c - 48) * str_base;
				str_base *= pow;
			}
			if (c - 48 >= pow)
				return (0);
		}
		else if ((c >= 'a' && c <= 'f') || (c >= 'A' && c <= 'F'))
		{
			if (c >= 'A' && c <= 'F')
				c += 32;
			if (i == len(str) - 1)
				nb += c - 'a' + 10;
			else
			{
				nb += (c - 'a' + 10) * str_base;
				str_base *= pow;
			}
			if (c - 'a' + 10 >= pow)
				return (0);
		}
		else if (i == 0 && c == '-')
			nb *= -1;
		else
			return (0);
		i--;
	}
	return (nb);
}

int main (int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%d", ft_atoi_base(argv[1], ft_atoi_base(argv[2], 10)));
	}
}
