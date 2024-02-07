#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i = 0, len = 0;
	char	*str;

	if (argc == 2)
	{
		while (argv[1][len])
			len++;
		len--;
		while ((argv[1][len] >= 9 && argv[1][len] <= 13)
				|| argv[1][len] == 32)
			len--;
		while (argv[1][len] && !((argv[1][len] >= 9 && argv[1][len] <= 13)
					|| argv[1][len] == 32))
		{
			i++;
		       len--;
		}
 		if (argv[1][len])
		{
			len++;
			while (i > 0)
			{
				write(1, &argv[1][len], 1);
				len++;
				i--;
			}
		}	
	}

	write(1, "\n", 1);
	return (0);
}
