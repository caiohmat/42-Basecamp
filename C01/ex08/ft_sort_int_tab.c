void	ft_sort_int_tab(int	*tab, int	size)
{
	int	counter;
	int	counter2;
	int	temp;

	counter = 0;
	while (counter <= size)
	{
		counter2 = 0;
		while (counter2 <= size)
		{
			if (tab[counter] < tab[counter2])
			{
				temp = tab [counter];
				tab[counter] = tab[counter2];
				tab[counter2] = temp;
			}
			counter2++;
		}
		counter++;
	}
}
