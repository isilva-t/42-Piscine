#include <unistd.h>

int	main(int argc, char **argv)
{
	int i = -1, j = -1, m = 0;
	//int tab[256] = {0}
	char *str;

if (argc == 3)
{
	while (argv[1][++i])
	{
		while (argv[2][++j])
		{
			if (argv[1][i] == argv[2][j])
			{
				m++;
				break ;
			}
		}
	}

	if (i == m)
	{
		i = -1;
		while (argv[1][++i])
			write(1, &argv[1][i], 1);
	}
}

write(1, "\n", 1);
return (0);
}	

