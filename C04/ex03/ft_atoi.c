int	ft_atoi(char	*str)
{
	int	counter;
	int	nbr;
	int	sign;

	counter = 0;
	while (str[counter] == ' ' || str[counter] == '\f' || str[counter] == '\n'
		|| str[counter] == '\r' || str[counter] == '\t' || str[counter] == '\v')
		counter++;
	sign = 1;
	while ((str[counter] == '-') || (str[counter] == '+'))
	{
		if (str[counter] == '-')
			sign = sign * (-1);
		counter++;
	}
	nbr = 0;
	while ((str[counter] >= '0') && (str[counter] <= '9'))
	{
		nbr = (nbr * 10) + (str[counter] - 48);
		counter++;
	}
	nbr = nbr * sign;
	return (nbr);
}
