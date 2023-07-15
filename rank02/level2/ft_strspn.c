/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguezzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 14:59:48 by aguezzi           #+#    #+#             */
/*   Updated: 2023/02/03 15:13:42 by aguezzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	int		good;
	size_t	i;
	size_t	j;

	i = 0;
	while (s[i])
	{
		j = 0;
		good = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
				good++;
			j++;
		}
		if (!(good))
			return (i);
		i++;
	}
	return (i);
}

int main (int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%lu\n%lu\n", strspn(argv[1], "abcd"), ft_strspn(argv[1], "abcd"));
	}
}
