#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	valor_absoluto(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

int	*ft_rrange(int start, int end)
{
	int	*array;
	int	range;
	int	i = 0;
	int	sum_dec;


	if (start > end)
		range = 1 + valor_absoluto(start - end);
	else if (end > start)
		range = 1 + valor_absoluto(end - start);
	else
		range = 1;

	printf("range %d,  ",range); // a comentar

	array = malloc(range * sizeof(int));
	if (array == NULL)
		return (NULL);
	
	if (end > start)
		sum_dec = 1;
	else
		sum_dec = -1;	

	while (i < range)
	{
		array[i] = start;
		printf("%d, ", array[i]); // a comentar
		start = start + sum_dec;
		i++;
	}
	return (array);
}

int	main(void)
{
	int i = 0; 
	int	 *array;
	int	start = 0;
	int	end = 3;

	ft_rrange(start, end);
}
