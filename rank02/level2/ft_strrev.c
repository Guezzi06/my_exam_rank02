/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguezzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 14:44:08 by aguezzi           #+#    #+#             */
/*   Updated: 2023/02/03 14:58:13 by aguezzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int	i;
	int	save;

	i = 0;
	while (i < len(str) / 2)
	{
		save = str[i];
		str[i] = str[len(str) - 1 - i];
		str[len(str) - 1 - i] = save;
		i++;
	}
	return (str);
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%s\n", argv[1]);
		printf("%s\n", ft_strrev(argv[1]));
	}
}
