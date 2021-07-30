int	ft_is_prime(int	nb)
{
	int	check;

	check = nb / 2;
	if (nb <= 1)
		return (0);
	while (check >= 2)
	{
		if (nb % check == 0)
			return (0);
		check--;
	}
	return (1);
}
