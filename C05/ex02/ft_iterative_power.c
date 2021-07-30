int	ft_iterative_power(int	nb, int	power)
{
	int	final;

	if (power < 0)
		return (0);
	final = 1;
	while (power >= 1)
	{
		final = final * nb;
		power--;
	}
	return (final);
}
