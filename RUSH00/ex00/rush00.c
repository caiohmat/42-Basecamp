void	ft_putchar(char symbol);

void	ft_determine(char l1, char c1, int x, int y)
{
	if (((l1 == 1) || (l1 == y)) && ((c1 == 1) || (c1 == x)))
		ft_putchar('o');
	else if (((c1 == 1) && (l1 > 1 && l1 < y))
		|| ((c1 == x) && (l1 > 1 && l1 < y)))
		ft_putchar('|');
	if (c1 == x)
		ft_putchar('\n');
	else if (((l1 == 1) && (c1 > 1 && c1 < x))
		|| ((l1 == y) && (c1 > 1 && c1 < x)))
		ft_putchar('-');
	else if ((l1 != 1) && (c1 != 1) && (l1 != y) && (c1 != x))
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	l;
	int	c;

	l = 1;
	c = 1;
	while (l <= y)
	{
		while (c <= x)
		{
			ft_determine(l, c, x, y);
			c++;
		}
		c = 1;
		l++;
	}
}
