#include <unistd.h>

int	main(int argc, char **argv)
{
	int i = -1;
	int tab1[256] = {0};

	if (argc == 3)
	{
		while (argv[1][++i])
		{
			if (tab1[(int)argv[1][i]] == 0)
			{
				tab1[(int)argv[1][i]] = 1;
				write(1, &argv[1][i], 1);
			}
		}
		i = -1;
		while (argv[2][++i])
		{
			if (tab1[(int)argv[2][i]] == 0)
			{
				tab1[(int)argv[2][i]] = 1;
				write(1, &argv[2][i], 1);
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
