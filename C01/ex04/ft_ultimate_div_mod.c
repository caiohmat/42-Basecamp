void	ft_ultimate_div_mod(int	*a, int	*b)
{
	int	tempa;
	int	tempb;

	if (*b != 0)
	{
		tempa = *a;
		tempb = *b;
		*a = tempa / tempb;
		*b = tempa % tempb;
	}
}
