/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguezzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 14:26:16 by aguezzi           #+#    #+#             */
/*   Updated: 2023/01/30 14:33:59 by aguezzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (argv[2][0] == '+')
			printf("%d", atoi(argv[1]) + atoi(argv[3]));
		else if (argv[2][0] == '-')
			printf("%d", atoi(argv[1]) - atoi(argv[3]));
		else if (argv[2][0] == '*')
			printf("%d", atoi(argv[1]) * atoi(argv[3]));
		else if (argv[2][0] == '/')
			printf("%d", atoi(argv[1]) / atoi(argv[3]));
	}
	printf("\n");
}
