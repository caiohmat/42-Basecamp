void	ft_rev_int_tab(int	*tab, int	size)
{
	int	temp;
	int	counter;

	counter = 0;
	while (counter < size)
	{
		temp = tab [counter];
		tab [counter] = tab [size - 1];
		tab [size - 1] = temp;
		counter++;
		size--;
	}
}
