#include <unistd.h>

void	ft_printnbr(int n)
{
	char	tab[10] = "0123456789";

	if (n >= 10)
	{
		ft_printnbr(n / 10);
		ft_printnbr(n % 10);
	}
	else
		write(1, &tab[n], 1);
}

void	ft_fizzbuzz(int min, int max)
{
	while (min < max)
	{
		if (min % 3 == 0 && min % 5 == 0 && min > 3)
			write(1, "fizzbuzz", 8);
		else if (min % 3 == 0 && min > 2)
			write(1, "fizz", 4);
		else if (min % 5 == 0 && min > 3)
			write(1, "buzz", 4);
		else
			ft_printnbr(min);
		write(1, "\n", 1);
		min++;
	}
}

int	main(void)
{
	ft_fizzbuzz(0, 20);
}
