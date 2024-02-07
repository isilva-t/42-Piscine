/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isilva-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 10:59:49 by isilva-t          #+#    #+#             */
/*   Updated: 2024/01/25 14:41:45 by isilva-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2);

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
	{
		write(1, &str[i], 1);
	}
	write(1, &"\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int	main(int argc, char **argv)
{
	char	*temp;
	int		ac;
	int		n_strings;

	if (argc < 2)
		return (0);
	n_strings = argc;
	while (--n_strings >= 0)
	{
		ac = 0;
		while (++ac < n_strings)
		{
			if (ft_strcmp(argv[ac], argv[ac + 1]) > 0)
			{
				temp = argv[ac];
				argv[ac] = argv[ac + 1];
				argv[ac + 1] = temp;
			}
		}
	}
	ac = 0;
	while (++ac < argc)
		ft_putstr(argv[ac]);
	return (0);
}
