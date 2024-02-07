/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isilva-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 10:17:32 by isilva-t          #+#    #+#             */
/*   Updated: 2024/01/30 10:26:28 by isilva-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i = 0, j, tab[256] = {0};

	if (argc == 3)
	{
		while (argv[1][i])
		{
			j = 0;
			while (argv[2][j])
			{
				if (argv[1][i] == argv[2][j])
				{
					if (tab[(int)argv[1][i]] == 0)
					{
						tab[(int)argv[2][j]] = 1;
						write(1, &argv[1][i], 1);
					}
				}
				j++;
			}
			i++;
		}
	}

	write(1, "\n", 1);
	return (0);
}
