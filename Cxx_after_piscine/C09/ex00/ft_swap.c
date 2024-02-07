void	ft_swap(int *a, int *b)
{
	int	memo;

	memo = *a;
	*a = *b;
	*b = memo;
}
