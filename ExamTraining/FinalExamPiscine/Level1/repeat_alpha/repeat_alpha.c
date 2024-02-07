#include <unistd.h>

void	repeat_alpha(char *str)
{
	char uppercase [] = " ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char lowercase [] = " abcdefghijklmnopqrstuvwxyz";
	int	i = 0, j;

	while (str[i])
	{
		j = 0;
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			while (str[i] != uppercase[j])
			{
				write(1, &str[i], 1);
				j++;
			}
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			while (str[i] != lowercase[j])
			{
				write(1, &str[i], 1);
				j++;
			}
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		repeat_alpha(argv[1]);
	}
	write(1, "\n", 1);
}
