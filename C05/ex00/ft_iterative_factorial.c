int	ft_iterative_factorial(int	nb)
{
	int	f;

	if (nb < 0)
		return (0);
	f = 1;
	while (nb > 1)
	{
		f = f * nb;
		nb--;
	}
	return (f);
}
