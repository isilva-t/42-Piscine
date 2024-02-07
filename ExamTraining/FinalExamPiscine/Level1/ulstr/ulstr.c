#include <unistd.h>

void	ft_convert(char *str)
{
	int	i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -=32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i = -1;

	if (argc == 2)
	{
		ft_convert(argv[1]);
		while (argv[1][++i])
			write(1, &argv[1][i], 1);
	}

	write(1, "\n", 1);
	return (0);
}
